#include <stdio.h>
#include <string.h>

    int callenth(const char * str){
        int lenth = 0;
        while (str[lenth] != '\0')
        {
            lenth ++;
        }

        return lenth;
        
    }

int main(){

    char string[100];

    printf("Enter any string : ");
    scanf("%s",string);

    int result = callenth(string);

    printf("Lenth is : %d\n",result);

    return 0;

}