#include <stdio.h>

void printFooBarBaz(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("FooBar\n");
        } else if (i % 5 == 0) {
            printf("Foo\n");
        } else if (i % 7 == 0) {
            printf("Bar\n");
        } else {
            printf("Baz\n");
        }
    }
}

int main() {
    int start, end;
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range! Start should be less than or equal to end.\n");
        return 1;
    }

    printFooBarBaz(start, end);
    return 0;
}
