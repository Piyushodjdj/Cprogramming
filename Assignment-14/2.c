#include<stdio.h>
int si(int p,int r,int t);
int main(){
    int p,r,t;
    scanf("%d%d%d",p,r,t);
    si(p,r,t);

    return 0;
}
int si(int p,int r,int t){
         int si=(p*r*t)/100;
         printf("%d",si);
}