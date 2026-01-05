/*
Faça um programa que leia um número de 0 a 9999 e mostre na tela cada um dos dígitos separados.
*/
#include <stdio.h>

int main(void){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    int unidade = n / 1 % 10;
    int dezena = n / 10 % 10;
    int centena = n / 100 % 10;
    int milhar = n / 1000 % 10;

    
    printf("\nMilhar: %d", milhar);
    printf("\nCentena: %d", centena);
    printf("\nDezena: %d", dezena);
    printf("\nUnidade: %d", unidade);
}