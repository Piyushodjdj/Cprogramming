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
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("max no is %d",min);
}