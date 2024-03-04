#include <stdio.h>

int main() {
    // Write C code here
    int arr[10];
    printf("Enter the size of array\n");
    int n;
     int s=0;
    scanf("%d",&n);
    printf("take input from user\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
   
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    
    printf("the sum of array is %d",s);
    

    return 0;
}