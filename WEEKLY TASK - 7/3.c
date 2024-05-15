// 3. **Question 3: Largest among Three Numbers**

#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter The numbers :- ");
    scanf("%d",&a);

    printf("Enter The numbers :- ");
    scanf("%d",&b);

    printf("Enter The numbers :- ");
    scanf("%d",&c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is Big...");
        }

        else{
            printf("C is Big...");
        }
        
    }

    else if(b > c )
    {
        printf("B is Big");
    }

    else
    {
        printf("C is Big");
    }
    
}