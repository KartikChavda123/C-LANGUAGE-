// Write a C program to find the sum of elements in an integer array.

#include<stdio.h>
int main()
{
    int array[100] , n ,sum=0;

    printf("Enter The Array Size of :- ");
    scanf("%d",&n);

    printf("Enter %d integer",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
        sum += array[i];
    }

    printf("The sum of All elements in array size is : %d\n",sum);

  return 0;
}