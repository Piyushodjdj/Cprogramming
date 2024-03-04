#include<stdio.h>
int small(int a[],int n);
int main(){
int a[100],size;
printf("enter the size ");
scanf("%d",&size);
printf("enter the size");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);  
}
int s=small(a,size);
printf("min no is %d",s);
return 1;
}
int small(int a[],int n){
int smax;
for(int i=0;i<n;i++){
if(a[i]<smax){
smax=a[i];
 }
     }
     return smax;
}