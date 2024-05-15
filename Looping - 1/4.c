#include <stdio.h>
int main(){
    int i=0,o;

    printf("Enter The Number : ");
    scanf("%d",&o);

    while (i<=o)
    {
        if (i %2==0 )
        {
            printf(" Even %d\n",i);
        }
    
        i++;
    }
    
}