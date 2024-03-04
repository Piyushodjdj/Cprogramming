#include <stdio.h>
int main(){
int a,b;
scanf("%d%d",&a,&b);

for(int i=a;i<=b;i++){
    int count =0;
    for(int div=2;div<a;div++){
        if(i%div==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("%d",i);
    }
}
}