#include<stdio.h>
int area(int r);
int main(){
   int c=5;
   area(5);
}
int area(int r){
    float area=3.14*r*r;
    printf("%f",area);
}