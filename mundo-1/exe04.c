#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

/*
    Exercicio 04: Crie um programa que leia algo pelo teclado e informe se é um numero, uma letra, uma palavra
    - Esse exercicio me trouxe o conhecimento do ctype, e do stdbool que por um momento achei que não teria (true e false)
    
*/
int main(void){
    // coletar a entrada
    char entrada[20]; // acredito que deve ser suficiente
    printf("Digite algo: ");
    scanf("%19s", entrada);

    // inicializar variáveis
    bool tem_letra = false;
    bool tem_numero = false;
    bool tem_ponto = false;
    bool eh_decimal = false;
    bool eh_inteiro = true;

    int n = strlen(entrada);
    for (int i = 0; i < n; i++){
        if (isalpha(entrada[i])){
            tem_letra = true;
        } else if (isdigit(entrada[i])){
            tem_numero = true;
        } else if (entrada[i] == '.'){
            tem_ponto = true;
        } else {
            eh_inteiro = false;
        }
    }

    if (tem_letra && !tem_numero){
        printf("'%s' e uma palavra.\n", entrada);
    } else if (tem_numero && !tem_letra && !tem_ponto){
        int numero = (int) entrada;
        if (numero < 0){
            printf("'%s' e um numero inteiro Negativo.\n", entrada);
        } else if (numero > 0){
            printf("'%s' e um numero inteiro Positivo.\n", entrada);
        } else {
            printf("'%s' e um numero inteiro Nulo ( 0 ).\n", entrada);

        }
        
    } else if (tem_numero && tem_ponto && !tem_letra){
        int numero = (int) entrada;
        if (numero < 0){
            printf("'%s' e um numero decimal Negativo.\n", entrada);
        } else if (numero > 0){
            printf("'%s' e um numero decimal Positivo.\n", entrada);
        } else {
            printf("'%s' e um numero decimal Nulo ( 0 ).\n", entrada);
        }
        
    } else if (n == 1 && isalpha(entrada[0])){
        printf("'%s' e uma letra.\n", entrada);
    } else {
        printf("'%s' e uma mistura de tipos.\n", entrada);
    }

    printf("\n--- Detalhes ---\n");
    printf("Quantidade de caracteres: %zu\n", strlen(entrada));
    printf("Contem letras? %s\n", tem_letra ? "Sim" : "Nao");
    printf("Contem numeros? %s\n", tem_numero ? "Sim" : "Nao");
    printf("Contem ponto decimal? %s\n", tem_ponto ? "Sim" : "Nao");
    return 0;
}
