/*
     Crie um programa que leia o nome de uma pessoa e diga se ela tem “SILVA” no nome.
*/

#include <stdio.h>
#include <string.h>

const int limiteString = 80;

void obterNome(char *str){
    printf("Digite o nome completo: ");
    fgets(str, limiteString, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void lowerCase(char *str){
    int n = strlen(str);
    for (int x = 0; x < n; x++){
        if (str[x] >= 'A' && str[x] <= 'Z'){
            str[x] = str[x] + 32;
        }
    }
}

int main(void){
    char nome_completo[limiteString];
    obterNome(nome_completo);
    lowerCase(nome_completo);

    if (strstr(nome_completo, "silva") != NULL){
        printf("O nome '-> %s <-' tem 'SILVA' no nome: ", nome_completo);
    } else {
        printf("O nome '-> %s <-' nao tem 'SILVA' no nome: ", nome_completo);
    }   

    return 0;
}
