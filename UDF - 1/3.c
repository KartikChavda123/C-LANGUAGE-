#include<stdio.h>

    void divison(int a){
        if (a % 3 == 0 && a % 5 == 0)
        {
            printf("Divisable Numbers");
        }

        else{
            printf("Not Divisable Numbers");
        }
        
    }

void main(){
    divison(18);
}