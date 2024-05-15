
// nagitive value task

#include<stdio.h>
int main(){
    int k;

    printf("Enter the numbers : ");
    scanf("%d",&k);


    if (k == 0)
    {
        printf("This is zero....%d",k);
    }

    else if(k < 0){
        printf("This is nagetive...%d",k);
    }

    else{
        printf("This is Positive...%d",k);
    }
    
}