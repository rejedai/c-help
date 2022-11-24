/*
Алгоритм: создаем счетчик для крайнего левого элемента и делаем цикл for 
для количества элементов /2. Далее меняем местами и увеличиваем счетчик на 1.
*/

#include <stdio.h>

void reverse(int m_pointer[], int m_count) {
    int counter = 0;
    for (int i = m_count - 1; i>=m_count/2; i--){
        int buf = m_pointer[counter];
        m_pointer[counter] = m_pointer[i];
        m_pointer[i] = buf;

        counter++;
    }
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
