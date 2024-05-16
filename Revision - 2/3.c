// 3. Implement a C program to find the factorial of a number using recursion.

#include<stdio.h>

    fact(a)
    {
        if (a>=1)
    
        return a*fact(a-1);

        else
            return 1;
    }

int main(){
    int a;

    printf("Enter A Number To Find Factorial:");

    scanf("%d",&a);

    printf("The Factorial of %d = %d", a, fact(a));
}