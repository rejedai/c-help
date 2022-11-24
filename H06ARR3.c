#include <stdio.h>

void odd_first(int m_pointer[], int m_count) {
    int odd_counter = 0;

    for(int a=0; a<m_count; a++) {
        if(m_pointer[a]%2==0){
            if(a > odd_counter) {
                int buf = m_pointer[odd_counter];
                m_pointer[odd_counter] = m_pointer[a];
                m_pointer[a] = buf;
            }
            odd_counter++;
        }
    }
}

int main() {
    int m[] = {3, 4, 1, 7, 5, 6, 11, 9, 8};
    
    for(int a=0; a<sizeof(m)/sizeof(m[0]); a++) {
        printf("%d ", m[a]);
    }
    odd_first(&m[0], sizeof(m)/sizeof(m[0]));
    printf("\n");
    for(int a=0; a<sizeof(m)/sizeof(m[0]); a++) {
        printf("%d ", m[a]);
    }
    
    return 0;
}
