/*
    Faça um programa que leia uma frase pelo teclado e mostre quantas vezes aparece a letra “A”, 
    em que posição ela aparece a primeira vez e em que posição ela aparece a última vez.
*/

#include <stdio.h>
#include <string.h>

const int limiteString = 200;

void lowerCase(char *str){
    int n = strlen(str);
    for (int x = 0; x < n; x++){
        if (str[x] >= 'A' && str[x] <= 'Z'){
            str[x] = str[x] + 32;
        }
    }
}

void get_string(char *prompt, char *string){
    printf("%s", prompt);
    fgets(string, limiteString, stdin);
    string[strcspn(string, "\n")] = '\0';
}

int contar_letra_a(char *str){
    int n = strlen(str);
    int cont = 0;
    for (int x = 0; x < n; x++){
        if (str[x] == 'a'){
            cont++;
        }
    }
    return cont;
}

int localizar_primeira_letra(char *str){
    int n = strlen(str);
    for (int x = 0; x < n; x++){
        if (str[x] == 'a'){
            return x;
        }
    }
    return -1;
}

int localizar_ultima_letra(char *str){
    int n = strlen(str);
    int posicao = 0;
    int encontrado = 0;
    for (int i = 0; i < n; i++){
        if (str[i] == 'a'){
            encontrado = 1;
            posicao = i;
        }
    }
    if (encontrado == 0){
        return -1;
    }
    return posicao;
}

int main(void){
    char frase[limiteString];
    get_string("\nDigite a frase: ", frase);
    lowerCase(frase);

    printf("\n");
    printf("Total de letras 'a' encontrada: %d\n", contar_letra_a(frase));
    printf("A primeira letra 'a' esta na posicao: %d\n", localizar_primeira_letra(frase));
    printf("A ultima letra 'a' esta na posicao: %d\n", localizar_ultima_letra(frase));
    return 0;
}