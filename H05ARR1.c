#include <stdio.h>
#include <limits.h>

int max_item(int *m_pointer, int m_count) {
    int max = INT_MIN;
    for(int a=0; a<m_count; a++) {
        if(max < m_pointer[a]) {
            max = m_pointer[a];
        }
    }
    return max;
}

int main() {
    int m[] = {3, 4, 1, 7};
    
    printf("%d", max_item(&m, sizeof(m)/sizeof(m[0])));
    return 0;
}
