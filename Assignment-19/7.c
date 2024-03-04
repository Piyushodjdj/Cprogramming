#include<stdio.h>
void unique(int arr[],int n);
int main(){
int a[100],size;
printf("enter the size ");
scanf("%d",&size);
printf("enter the size");
for(int i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
unique(a,size);
return 0;
}
void unique(int arr[],int n){
    for(int i=0;i<n;i++){
        int ctr=0;
        for(int j=0;j<n;j++){
          if(i!=j){
            if(arr[i]==arr[j])
            {
            ctr++;
            }
          }
        }
        if(ctr==0){
    printf("%d",arr[i]);
        }
    }
}