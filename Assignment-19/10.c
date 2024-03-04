#include<stdio.h>
void frequency(int arr[],int n,int d);
int main(){
int a[100],n,d;
printf("entr the size and no");
scanf("%d%d",&n,&d);
printf("take array value");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
frequency( a,n ,d);

    return 0;
}
void frequency(int arr[],int n,int d){
    int count=0;
    for(int i=0;i<n;i++){
     if(arr[i]==d){
        count++;
     }
    }
    printf("%d",count);
}