#include<stdio.h>
int main(){

    float sum=0;
    float avr;
   float arr[3][3]=
   {
    {2,4,1},
    {3,5,4},
    {8,2,6}
   };
    for (int i=0; i<=2; i++)
    {
        for (int j=0; j<=2; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("sum = %.2f\n",sum);

    printf("avr = %.2f",sum/9);
    
}