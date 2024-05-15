#include <stdio.h>
int fact(k)
{
    if (k == 1)
    {
        return 1;
    }
    else if (k <= 0)
    {
        return 0;
    }
    else
    {
        return k *= fact(k - 1);
    }
}

 int main()
{
    int k;
    printf("enter value");
    scanf("%d", &k);

    if (fact(k)==0)
    {
        printf("invalid");
    }
    else
    {
        printf("%d", fact(k));
    }
}