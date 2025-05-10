#include<stdio.h>

int main(){
    //lista1 exercicio10
    
    int num1;
    int num2;
    int num3;
    int maior;

    printf("digite um numero: ");
    scanf("%d", &num1);

    printf("digite outro: ");
    scanf("%d", &num2);

    printf("digite outro: ");
    scanf("%d", &num3);

    maior = num1;

    if(num2>maior){
        maior = num2;
    }
    else if(num3>maior){
        maior = num3;
    }

    printf("o maior numero e %d", maior);

}