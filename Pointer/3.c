#include<stdio.h>

    int swap(int * n1,int *n2){
        int t;
        t=*n1;
        *n1=*n2;
        *n2=t;

        printf("After swaping = %d\n After swaping = %d",*n1,*n2);
    }


void main(){
    int a,b;
    printf("Enter the numbers :");
    scanf("%d", &a);

    printf("Enter the numbers :");
    scanf("%d", &b);

    swap(&a,&b);
}