#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int a=n; a>1; a--){
        if(a%2==0){
            printf("%d ", a);
        }
    }
}
