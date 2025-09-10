#include <stdio.h>

int main (){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num==0){
        printf("É zero");
    }
    else{
        if(num > 0){
        printf("É maior que zero");
        }
        else{
            printf("É menor que zero");
        }
    }
    return 0;
}