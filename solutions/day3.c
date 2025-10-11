#include <stdio.h>
int main() {
    int a, b, i;
    printf("Enter 2 non-negative integers, representing the start and end of the range: ");
    scanf("%d %d", &a, &b);
  
    if (a >= b) {
        printf("Error: 'a' must be less than 'b'.\n");
        return 1;}
  
    for (i = a; i <= b; i++) {
        if (i % 5 == 0 && i % 7 == 0) 
        { printf("FooBar\n");} 
        else if(i%5==0 &&  i%7!=0) 
        { printf("Foo\n");} 
        else if(i%5!=0 &&  i%7==0) 
        { printf("Bar\n");} 
        else 
        { printf("Baz\n");}
    }
  
    return 0;
}
