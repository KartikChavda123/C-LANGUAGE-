#include <stdio.h>
int main(){
    int a,b=0;
    printf("Enter the number of a :");
    scanf("%d",&a);

    while (a !=0)
    {
        a /=10;
        b++;
    }

    printf("Totel Number %d\n",b);
    

}