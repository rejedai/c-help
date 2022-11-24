#include <stdio.h>

void reverse(int m_pointer[], int m_count) {
    int buf = m_pointer[0];
    m_pointer[0] = m_pointer[m_count-1];
    m_pointer[m_count-1] = buf;
    
    if (m_count>2) reverse(&m_pointer[1], m_count-2);
}

int main() {
    int m[] = {3, 4, 1, 7, 5, 6, 11, 9, 8};
    
    for(int a=0; a<sizeof(m)/sizeof(m[0]); a++) {
        printf("%d ", m[a]);
    }
    reverse(&m[0], sizeof(m)/sizeof(m[0]));
    printf("\n");
    for(int a=0; a<sizeof(m)/sizeof(m[0]); a++) {
        printf("%d ", m[a]);
    }
    
    return 0;
}
