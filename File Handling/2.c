#include<stdio.h>
int main()
{
    FILE *p;
    char data [100];

    p = fopen("read.txt","w");

    if (p == NULL)
    {
        printf("Can't  open file");
    }

    else{
    printf("enter message : ");
    gets(data);
    fputs(data,p);
    }
       
}


