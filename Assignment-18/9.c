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
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
             int tem=arr[j];
            arr[j]=arr[i];
            arr[i]=tem;
            }
        }
    }
    for(int i=0;i<size;i++){
    printf("%d",arr[i]);
   }
}