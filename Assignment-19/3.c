#include<stdio.h>
void sort(int a[],int n);
int main(){
int a[100],size;
printf("enter the size ");
scanf("%d",&size);
printf("enter the size");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
sort(a,size);
for(int i=0;i<size;i++){
printf("%d\n",a[i]);
}
}

void sort(int a[],int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

}