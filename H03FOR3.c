#include <stdio.h>

int main() {
    int a;
    int n;
    scanf("%d", &a);
    scanf("%d", &n);
    
    int result=1;
    int exp_a = a; // exp это экспоненета т.е. степень в переводе с англ.
    
    for(int i=1; i<=n; i++){
        result += exp_a;
        exp_a *= a; // каждый проход цикла увеличиваем степень a
    }
    
    printf("%d ", result);
}
