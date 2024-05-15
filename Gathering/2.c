#include<stdio.h>
 
    int rec(int a,int b){
    int area;

    printf("Enter value of rec height :");
    scanf("%d",&a);

    printf("Enter value of rec width :");
    scanf("%d",&b);

    if (a>0 && b>0)
    {
        printf("rec height %d\n",a);
        printf("rec width %d\n",b);

        area=a*b;
    }

    else{
        printf("invalid");
    }

    return(area);
    
}

int main(){
    int K,A;
    printf("Area of rectangle %d",rec(K,A));

    return 0;
}