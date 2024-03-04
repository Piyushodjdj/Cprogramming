#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    int b=1;
    int m=1;
    for(int i=1;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
      if(c==n){
        m=1;
        break;
      }else{
        m=0;
      }
    }
 if(m==1){
    printf("no is in series");
 }
else{
    printf("no is not in series");
}

}