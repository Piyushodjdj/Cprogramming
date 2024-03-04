#include <stdio.h>
int main(){
    
   for(int i=3;i<=100;i++){
    int count=0;
    for(int div=2;div<i/2;div++){
     if(i%div==0){
        count++;
        
     }
          
  
    }
    if(count==0)
    printf("%d",i);
    
   }
    

}