#include <stdio.h>

int main() {
    int a;
    int n;
    scanf("%d", &a);
    scanf("%d", &n);
    
    int result=1;
    int exp_a = a;
    
    for(int i=1; i<=n; i++){
        if(i%2==0){
            result += exp_a;
        } else {
            result -= exp_a;
        }
        exp_a *= a;
    }
    
    printf("%d ", result);
}
