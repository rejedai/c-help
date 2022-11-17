#include <stdio.h>

int main() {
    int result = 1; // результат тут будет конечный результат суммы
    int n;
    
    scanf("%d", &n);
    for(int a=2; a<=n; a++){
        result+=a; // увеличиваем результат на a
    }
    printf("%d", result);
}
