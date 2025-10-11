#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ",n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
  
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            sum += arr[i];
        }
    }
  
    printf("%d\n", sum);
    
    return 0;
}
