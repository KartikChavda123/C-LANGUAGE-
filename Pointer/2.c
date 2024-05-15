#include<stdio.h>

   int max(int *a, int *b){
        if (*a > *b)
        {
            printf("Minimum  numbers : %d",*b);
        }

        else{
            printf("Minimum numbers : %d",*a);
        }
        
    }

void main(){
    int a,b;
    printf("Enter the numbers :");
    scanf("%d",&a);

    printf("Enter the numbers :");
    scanf("%d",&b);

    max(&a,&b);
}