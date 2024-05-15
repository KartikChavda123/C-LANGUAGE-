#include<stdio.h>

    int swap(int *c,int *d,int *e){
        int *t;

        t=c;
        c=d;
        d=e;
        e=t;

        printf("*** new value *** \n");
        printf("c : %d\n",*c);
        printf("d : %d\n",*d);
        printf("e : %d\n",*e);
}

void main(){
    int c,d,e;

    printf("Enter the numers :-");
    scanf("%d",&c);

    printf("Enter the numers :-");
    scanf("%d",&d);

    printf("Enter the numers :-");
    scanf("%d",&e);

    swap(&c,&d,&e);
}