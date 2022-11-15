#include <stdio.h>

int main() {
    // Write C code here
    int result = 1;
    int n;
    
    scanf("%d", &n);
    for(int a=2; a<=n; a++){
        result+=a;
    }
    printf("%d", result);
}
