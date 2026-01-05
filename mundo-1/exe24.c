/*
    Crie um programa que leia o nome de uma cidade diga se ela começa ou não 
    com o nome “SANTO”.
*/

#include <stdio.h>
#include <string.h>

const int limiteString = 80;

void obterCidade(char *cidade){
    printf("\nDigite o nome da cidade: ");
    fgets(cidade, limiteString, stdin);
    cidade[strcspn(cidade, "\n")] = '\0';
}

void upperCase(char *str){
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
}

int main(void){

    // Variaveis
    char cidade[limiteString]; // variavel texto

    // Inicio
    obterCidade(cidade); // ler nome da cidade
    upperCase(cidade); // converter todos os caracteres para maiusculas
    
    // pega o primeiro nome da cidade
    int index = strcspn(cidade, " ");// pega o indice do primeiro espaço em branco
    char cidade1[index]; // armazena o primeiro nome 
    strncpy(cidade1, cidade, index); // copia o primeiro nome

    if (strcmp(cidade1, "SANTO") == 0){
        printf("Cidade de '%s' comeca com a palavra SANTO.\n", cidade);
    } else {
        printf("Cidade de '%s' nao comeca com a palavra SANTO.\n", cidade);
    }

    return 0;
}