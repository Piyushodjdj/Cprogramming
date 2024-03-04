#include<stdio.h>
int large(int arr[],int n);
int main(){
    int arr[100];
    int n;
    printf("enter the sizze of array");
    scanf("%d",&n);
    printf("take input from user");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int c=large(arr,n);
    printf("large element is %d",c);

}
int large(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}