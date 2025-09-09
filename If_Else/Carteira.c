#include <stdio.h>

int main (){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    if(idade>=18){
        printf("Pode tirar carteira");
    }
    else{
        printf("Não pode tirar carteira");
    }
    return 0;
}