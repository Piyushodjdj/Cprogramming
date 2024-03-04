#include<stdio.h>
int main(){
    int arr[100];
    int size;
    printf("enter the size");
    scanf("%d",&size);
   
    printf("take array from user");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<size;i++)
    if(arr[i]%2==0){
         evensum=evensum+arr[i];
    }else{
        oddsum=oddsum+arr[i];
    }
    printf("even sum is %d",evensum);
    printf("odd sum is %d",oddsum);
    
    
}