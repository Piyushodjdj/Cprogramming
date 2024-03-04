#include<stdio.h>
int main(){
    int n=153;
    int s=0;
    int temp=n;
    while(temp>0){
        int i=temp%10;
        s=s+(i*i*i);
        temp=temp/10;

    }
    if(n==s){
        printf("no is armstrong");
    }else{
        printf("no is not arm");
    }
}