#include <stdio.h>
int main(){
    int a=1,b=1,c;
    for(int i=1;i<=8;i++){
         c=a+b;
         a=b;
         b=c;
        printf("%d",c);
    }
     
    

}