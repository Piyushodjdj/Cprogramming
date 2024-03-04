#include<stdio.h>
int main(){
    int i=0;
    char s[]="Hello world";
    for( i=0;s[i]!='\0';i++);
    printf("%d",i);
}