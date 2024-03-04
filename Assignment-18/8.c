#include<stdio.h>
#include<limits.h>
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
    int smix=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        }
        printf("Min is %d",min);
           
        
    }
