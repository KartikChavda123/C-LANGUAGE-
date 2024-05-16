// 1. Write a C program to check if a number is even or odd using if-else statements.

#include<stdio.h>
int main(){

    int k;

    printf("\nEnter The Number :-");
    scanf("%d",&k);
    

    if (k % 2 == 0)
    {
        printf("\nThis Is Even Numbers:\n",k);
    }
    else
    {
        printf("\nThis is Odd Number:",k);
    }

}