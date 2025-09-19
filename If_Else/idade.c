/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int nasc, subt;
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &nasc);
    subt= 2025 - nasc;
    printf("Idade calculada: %d anos.\n", subt);
    if(subt >= 18 && subt <=67){
        printf("Pode doar\n");
    }
    else{
        printf("Não pode doar\n");
    }


    return 0;
}