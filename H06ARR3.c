/*
Алгоритм: создаем счетчик четных чисел, проходим по всем элементам массива, 
если значение элемента четное и его индекс больше числа чисел в счетчике, 
то меняем значения местами.

Условие больше нужно чтобы пропустить первые четные члены массива, например:
2, 4, 6, 8, 10, 2, 4, 5, 3, 2, 7 - в этой последовательности нам не нужно ничего менять до 5,
т.е. счетчик на 5 будет равен 7, и сделает замену только на 9 элементе. Получим:

2, 4, 6, 8, 10, 2, 4, 2, 3, 5, 7 - поменяли местами 7 и 9 член массива.
*/

#include <stdio.h>

void odd_first(int m_pointer[], int m_count) {
    int odd_counter = 0; //счетчик четных чисел.

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
