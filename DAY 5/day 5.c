#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    
    int nums[size];
    int count = 0 ;
    for(int i = 0; i < size; i++){
        printf("Enter the %dth term = ",i);
        scanf("%d",&nums[i]);
        if(nums[i] > 0){
            count += nums[i];
        }
    }
        
    printf("The sum of all positives in array = %d",count);
    
    return 0;
}
