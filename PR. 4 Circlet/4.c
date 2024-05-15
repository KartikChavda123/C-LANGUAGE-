#include <stdio.h>

int main() {

    int a,b,c;
    for(int a=1;a<=5;a++){
      for(int b=1; b<=a;b++)
      {
      printf("%d",b);    
      }
      for(int c=8;c>=a*2-1;c--){
          printf(" ");
      }
      for(int b=a;b>=1;b--){
          printf("%d",b);
      }
      
      printf("\n");
      
  }
    return 0;
}