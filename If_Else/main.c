#include <stdio.h>

int main(){
    float salario, novo;
    
    printf("Digite o salário: ");
    scanf("%f",&salario);
    if(salario<=2000){
        novo = salario * 1.30;
    }
    else{
        novo = salario * 1.10;
    }
    printf("O novo salário é R$%.2f",novo);
    return 0;
}
