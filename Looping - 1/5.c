#include <stdio.h>
int main(){
    int a,b;

    printf("Enter The First Number : ");
    scanf("%d",&a);

    printf("Enter The Second Number : ");
    scanf("%d",&b);
    
    while (a<=b)
    {
       if (a%4==0)
       {
        printf("%d\n",a);
       }

        a++;   
    }

}