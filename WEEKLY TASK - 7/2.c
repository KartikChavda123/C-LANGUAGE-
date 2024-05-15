#include<stdio.h>

int main()
{

    int a;

    printf("Enter the numbers :-");
    scanf("%d",&a);

    if (a % 2 == 0)
    {
        printf("This is Even....%d",a);
    }

    else{
        printf("This is odd...%d",a);
    }
}