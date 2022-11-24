#include <stdio.h>

void max_item(int *m_pointer, int m_count) {
    int max = -32767;
    for(int a=0; a<m_count; a++) {
        if(max < m_pointer[a]) {
            max = m_pointer[a];
        }
    }
    printf("%d", max);
}

int main() {
    long int m[] = {3, 4, 1, 7};
    
    //вызов функции
    max_item(&m, sizeof(m)/sizeof(m[0]));
    return 0;
}
