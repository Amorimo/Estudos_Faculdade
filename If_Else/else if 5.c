#include <stdio.h>

int main (){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if(num==0){
        printf("É zero");
    }
    else if(num == 1){
        printf("Um");
    }
    else if(num == 2){
        printf("Dois");
    }
    else if(num == 3){
        printf("Três");
    }
    else if(num == 4){
        printf("Quatro");
    }
    else if(num == 5){
        printf("Cinco");
    }
    else{
        printf("Só vai até o Cinco!!!");
    }
    return 0;
}