#include<stdio.h>
int duplicate(int arr[],int n);
int main(){
int a[100],size;
printf("enter the size ");
scanf("%d",&size);
printf("enter the size");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("%d",duplicate(a,size));
return 0;
}
int duplicate(int arr[],int n){
for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
       return i;
      break;
    }  

}
}