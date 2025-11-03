#include <stdio.h>

/*
    Exercicio 05: Crie um programa que leia um numero e informe o sucessor e o antecessor
        
*/
int main(void){
    int n;
    int sucessor;
    int antecessor;

    printf("Digite um numero: ");
    scanf("%i", &n);

    sucessor = n + 1;
    antecessor = n - 1;
    printf("Numero digitado: %i\nAntecessor: %i\nSucessor: %i", n, antecessor, sucessor);
    return 0;
}