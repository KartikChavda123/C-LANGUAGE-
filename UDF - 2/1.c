#include<stdio.h>

    int sum(int arr[])
    {
        int sum;

        for (int i = 0; i<=4; i++)
        {
            sum+=arr[i];
        }
        printf(" sum of numbers : %d",sum);   
    }

    int main(){
    int arr[]={6,4,1,5,2};
    sum(arr);
}