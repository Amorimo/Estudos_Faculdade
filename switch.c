/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int escolha;
    printf("1 - Abraão\n");
    printf("2 - Ester\n");
    printf("3 - João\n");
    printf("4 - Maria\n");
    printf("Digite a sua escolha: ");
    scanf("%d",&escolha);
    
    switch(escolha){
        case 1:
            printf("0 escolhido foi Abraão\n");
            break;
        case 2:
            printf("A escolhida foi Ester\n");
            break;
        case 3:
            printf("O escolhido foi João\n");
            break;
        case 4:
            printf("A escolhida foi Maria\n");
            break;
        default:
            printf("Número inválido\n");
            break;
    }
    return 0;
}