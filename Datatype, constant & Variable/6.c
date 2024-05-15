#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the value of a");
    scanf("%d",&a);

    printf("Enter the value of b");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("After swap a= %d\n",a);
    printf("After swap b= %d",b);

}