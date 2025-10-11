#include <stdio.h>
int main() {
    int N, i, j, spaces;
    printf("Enter the number of levels: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        spaces = N - i;
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
  return 0;
}
