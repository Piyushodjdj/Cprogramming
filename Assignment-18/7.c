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
    int max=arr[0];
    int smax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }


        }
        
            printf("%d",smax);
        
    }
