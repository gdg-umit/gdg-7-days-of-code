#include <stdio.h>

int main() {
    int n;
    printf("Enter your no. of lines in the pyramid : ");
    scanf("%d", &n);
    
    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= n-a ; b++){
            printf(" ");
        }
        for(int b = 1; b <= (2*a-1) ; b++){
            printf("*");
        }printf("\n");
    }

    return 0;
}
