#include<stdio.h>

    void cube(int *k)
 {
        int a=*k;    
        int c=a*a*a;
        printf("normal numbers:-%d\nCube for numbers:-%d",*k,c);
}
    void main()
{
    int a;

    printf("Enter the numbers :");
    scanf("%d",&a);

    cube(&a);
}   