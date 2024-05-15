#include<stdio.h>
int main(){
    int a[100],size,max,i;

    printf("Enter the size of arry : ");
    scanf("%d",&size);

    printf("Enter value of arry : ");

     for (int i=0; i< size; i++)
     {
        scanf("%d",&a[i]);
     }

     max=a[0];

     for (int i=0; i<size; i++)
     {
        if (a[i]>max)
        {
            max=a[i];
        }
     }
     
        
        printf("Largest value of arry: %d",max);
}