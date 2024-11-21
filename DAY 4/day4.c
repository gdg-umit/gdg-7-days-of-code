#include <stdio.h>

float percentage(int x, int y, int z) {
    return (z / (float)(x * y)) * 100; 
}

int main() {
    int X, Y, Z;
    printf("Enter the No. of Schools = ");
    scanf("%d", &X);
    printf("Enter the No. of Students = ");
    scanf("%d", &Y);
    printf("Enter the No. of Students who passed = ");
    scanf("%d", &Z);

    float result = percentage(X, Y, Z);

    if (result > 50.) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
