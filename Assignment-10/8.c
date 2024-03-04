#include <stdio.h>
int main(){
int a;
scanf("%d",&a);

for(int i=a;i>0;i++){
    int count =0;
    for(int div=2;div<a;div++){
        if(i%div==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("%d",i);
        break;

    }
}
}