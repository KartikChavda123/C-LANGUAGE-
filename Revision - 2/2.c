// 2. Create a program to find the largest among three numbers using nested if-else.

#include<stdio.h>
int main(){

    int c,d,e;

    printf("\nENTER THE VALUE OF C=");
    scanf("%d",&c);

    printf("\nENTER THE VALUE OF D=");
    scanf("%d",&d);

    printf("\nENTER THE VALUE OF E=");
    scanf("%d",&e);

    if (c>d)
    {
        if (c>e)
        {
            printf("\nTHE LARGEST NUMBER IS C=%d",c);
        }

        else
        {
            printf("\nTHE LARGEST NUMBER IS E=%d",e);
        }
        
    }
    
    else if(d>e)
    {
        printf("\nTHE LARGEST NUMBER IS D=%d",d);
    }

    else
    {
        printf("\nTHE LARGEST NUMBER IS E=%d",e);
    }


}
