#include <stdio.h>
#include <float.h>

void min_max_swap(float *m_pointer, int m_count) {
    float max = -FLT_MAX;
    float min = FLT_MAX;
    
    for(int a=0; a<m_count; a++) {
        if(min > m_pointer[a]) {
            min = m_pointer[a];
        } else if(max < m_pointer[a]) {
            max = m_pointer[a];
        }
    }
    
    for(int a=0; a<m_count; a++) {
        if(min == m_pointer[a]) {
            m_pointer[a] = max;
        } else if(max == m_pointer[a]) {
            m_pointer[a] = min;
        }
    }
}

int main() {
    float m[] = {3.1, 4.2, 1.1, 7.3, 4.2, 1.1, 3.1, 4.2, 7.3};
    
    for(int i=0; i<sizeof(m)/sizeof(m[0]); i++){
        printf("%f ", m[i]);
    }
    
    min_max_swap(&m, sizeof(m)/sizeof(m[0]));
    
    printf("\n");
    for(int i=0; i<sizeof(m)/sizeof(m[0]); i++){
        printf("%f ", m[i]);
    }
    
    return 0;
}
