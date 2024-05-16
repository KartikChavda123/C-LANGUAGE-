// 3. Implement a function to reverse an array of characters in-place.

#include<stdio.h>
#include<string.h>

void revarse(char arr[],int lenth)
{
    int start=0;
    int end = lenth-1;

    while (start < end)
    {
        char temp = arr[start];
        arr[start] = arr[end];
        arr [end] = temp;

        start ++;
        end --;
    }
    
}

int main()
{
    char arr[] = "Hello World";
    int lenth = strlen(arr);

    printf("Orignal Array :- %s\n",arr);

    revarse(arr,lenth);
    printf("Reversed array :- %s\n",arr);
}
