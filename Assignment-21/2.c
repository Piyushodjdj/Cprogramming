// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // WriteC code here
    int i;
    char s[]="programming is fun";
    char d='m';
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==d){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}