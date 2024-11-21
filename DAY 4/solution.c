#include <stdio.h>

int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int X, Y, Z;
        printf("Enter X (colleges), Y (students per college), Z (students passed): ");
        scanf("%d %d %d", &X, &Y, &Z);

        int totalStudents = X * Y;

        if (Z > totalStudents / 2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
