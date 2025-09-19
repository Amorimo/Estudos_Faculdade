/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char turno;
    printf("Digite seu Turno (M,V,N): ");
    scanf("%c",&turno);
    if(turno=='M'|| turno=='m'){
        printf("Bom dia!");
    }
    else if (turno=='V'|| turno=='v'){
        printf("Boa tarde!");
    }
    else if (turno=='N'|| turno=='n'){
        printf("Boa noite!");
    }
    else{
        printf("?");
    }
    return 0;
}