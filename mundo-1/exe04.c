#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

/*
    Exercicio 04: Crie um programa que leia algo pelo teclado e informe se é um numero, uma letra, uma palavra
    - Esse exercicio me trouxe o conhecimento do ctype, e do stdbool que por um momento achei que não teria (true e false)
    
*/

int main(void){
    // variaveis
    char entrada[20]; // variavel texto -> coletar entrada do teclado
    bool tem_letra, tem_numero, tem_ponto = false; // variavel booleana -> confirmar a entrada do usuario
    int n; // variavel inteira -> coletar o comprimento da entrada
    
    // inicio -> coletar entrada do usuario
    printf("Escreva algo pelo teclado: "); // interface 1 - Entrada
    scanf("%s", entrada); // processo 1 - Leitura do teclado
    
    // Processo -> Analisar entrada do usuario
    n = strlen(entrada); // processo 2 - capturar comprimento da entrada
    for (int i = 0; i < n; i++){ // processe 3 - Percorrer cada caractere informado
        char caractere = entrada[i]; // processo 4 - Copia o caractere atual
        if (caractere == '.'){ // processo 5 - Verifica se o caractere atual é um ponto
            tem_ponto = true;
        } else if (isalpha(caractere)){ // processo 6 - Verifica se o caractere atual é uma letra
            tem_letra = true;
        } else if (isdigit(caractere)){ // processo 7 - Verifica se o caractere atual é um número
            tem_numero = true;
        }
    }

    printf("Entrada recebida: %s", entrada);
    if (tem_letra && !tem_numero){ // tem letras e não tem numeros
        if (n == 1){
            printf("\nEntrada recebida: %s -> E uma letra", entrada);
        } else {
            printf("\nEntrada recebida: %s -> E uma palavra", entrada);
        }
    } else if (tem_numero && !tem_letra){ // tem numeros e não tem letras
        if (tem_ponto){ // é numero e tem pontos
            printf("\nEntrada recebida: %s -> E um numero real", entrada);
        } else {
            printf("\nEntrada recebida: %s -> E um numero inteiro", entrada);
        }
    } else if (tem_letra && tem_numero){
        printf("\nEntrada recebida: %s -> Tem numeros e letras", entrada);
    }

    return 0;
}