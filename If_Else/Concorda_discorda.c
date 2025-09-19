/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra;
    printf("Você concorda (s/n)");
    scanf("%c", &letra);
    if(letra == 's'){
        printf("Concorda");
    }
    else if(letra == 'n'){
        printf("Discorda");
    }
    else{
        printf("?");
    }

    return 0;
}