// Enter the value of N: 5
// The sum of the first 5 natural numbers is: 15

#include<stdio.h>
int main(){
    int k,sum=0;

    printf("Enter the numbers :-");
    scanf("%d",&k);

    for (int i=0; i<=k; i++)
    {
        sum=sum+i;
    }

    printf("%d",sum);
    
}