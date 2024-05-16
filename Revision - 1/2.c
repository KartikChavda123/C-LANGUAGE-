// 2. Create a program to find the largest element in an array of integers.

#include<stdio.h>
int main(){
    int array[100], a, max;

    printf("Enter the array size :-");
    scanf("%d",&a);

    printf("Enter  integer :-",a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&array[i]);
    }

    max = array[0];

    for (int i = 0; i < a; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        
    }
    
    printf("The Largest element of array :- %d\n",max);
    
}