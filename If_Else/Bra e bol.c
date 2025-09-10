#include <stdio.h>

int main (){
    int bra, bol;
    printf("Digite a pontuação da Bolívia: ");
    scanf("%d", &bol);
    printf("Digite a pontuação do Brasil: ");
    scanf("%d", &bra);
    if(bol>bra){
        printf("Bolívia ganhou");
    }
    else if(bol == bra){
        printf("Empate");
    }
    else{
        printf("Brasil ganhou");
    }    
    return 0;
}