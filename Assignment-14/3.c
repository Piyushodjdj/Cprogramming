#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf(ret(n));

}
int ret(int r){
    if(r%2==1){
        return "1";
    }else{
        return "0";
    }
}