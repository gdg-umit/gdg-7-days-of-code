#include <stdio.h>

int main(){
    int a , b;
    printf("Enter the starting number = ");
    scanf("%d",&a);
    printf("Enter the ending number = ");
    scanf("%d",&b);
    
    for(int i = a; i<= b; i++){
        // printf("%d ",i);
        if(i%5==0 && i%7==0){
            printf("FooBar\n");
        }
        else if(i%5==0 && i%7!=0){
            printf("Foo\n");
        }
        else if(i%5!=0 && i%7==0){
            printf("Bar\n");
        }
        else if(i%5!=0 && i%7!=0){
            printf("Baz\n");
        }
    }
    return 0;
}
