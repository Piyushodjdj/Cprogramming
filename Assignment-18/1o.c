#include<stdio.h>
int main(){
    int arr1[100];
    int arr2[100];
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
   for(int i=0;i<size;i++){
    arr2[i]=arr1[i];
   }
   for(int i=0;i<size;i++){
    printf("%d",arr2[i]);
   }
}