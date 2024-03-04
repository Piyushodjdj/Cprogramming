#include<stdio.h>
void swap(int arr[],int a,int b);
int main(){
int a[100],size;
printf("enter the size ");
scanf("%d",&size);
printf("enter the size");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
swap(a,2,3);
for(int i=0;i<size;i++){
    printf("%d",a[i]);
}
}


void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[b]=arr[a];
    arr[a]=temp;
}

