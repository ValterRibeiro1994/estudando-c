#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

const int limiteString = 80; // nome completo

char* obterNomeCompleto(){
    char* nome = malloc(limiteString * sizeof(char));
    if (nome == NULL){return NULL;}

    printf("Digite nome completo: ");
    fgets(nome, limiteString, stdin);
    
    nome[strcspn(nome, "\n")] = '\0';

    return nome;
}

void upperCase(char *str){
    for (int i = 0; str[i] != '\0'; i++){
        str[i] = toupper((unsigned char)str[i]);
    }
}

void lowerCase(char *str){
    for (int i = 0; str[i] != '\0'; i++){
        str[i] = tolower((unsigned char)str[i]);
    }
}

int contarEspacos(char *str){
    int index, n = 0;
    while (str[index] != '\0'){
        if (isspace(str[index])){n++;}
        index++;
    }
    return n;
}

int main(void){
    // processo - coletar nome
    char* nome_completo = obterNomeCompleto();
    printf("\nNome informado: %s", nome_completo);
    
    // processo - exibir primeiro nome
    int indice = strcspn(nome_completo, " ");
    char nome[indice];
    strncpy(nome, nome_completo, indice); 
    printf("\nPrimeiro Nome: %s", nome);

    // processo - contar letras do primeiro nome
    printf("\nLetras no Primeiro Nome: %d", strlen(nome));

    // processo - converter nome completo para maiusculas
    upperCase(nome_completo);
    printf("\nNome em maiusculas: %s", nome_completo);

    // processo - converter nome completo para minusculas
    lowerCase(nome_completo);
    printf("\nNome em minusculas: %s", nome_completo);

    // processo - contar letras do nome completo
    int espacos = contarEspacos(nome_completo);
    int letras = strlen(nome_completo) - espacos;
    printf("\nTotal de letras sem espaço: %d", letras);
    free(nome_completo);
    return 0;
}