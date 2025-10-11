#include <stdio.h>

int main() {
    int T, X, Y, Z, total_students;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
  
    for (int i = 1; i <= T; i++) {
        printf("\nTest case %d:\n", i);
      
        printf("Enter X (Number of schools), Y (Students per school), Z (Students passed):\n");
        scanf("%d %d %d", &X, &Y, &Z);

        total_students = X * Y; 
        if (Z > total_students / 2) {
            printf("YES\n");}
        else {
            printf("NO\n");}
    }

    return 0;
}
