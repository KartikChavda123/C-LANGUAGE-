#include<stdio.h>

   int max(int *a, int *b){
        if (*a < *b)
        {
            printf("Maximum numbers : %d",*b);
        }

        else{
            printf("maximum numbers : %d",*a);
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