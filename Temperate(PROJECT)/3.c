#include <stdio.h>
int main(){
    int f,b,a,sum;
    printf("ENter the num of f:");
    scanf("%d",&f);

    b=f%10;

    while (f>=10)
    {
        f=f/10;
    }

    a=f;

    sum=a+b;

    printf("First and last digit %d\n",sum);
    

}