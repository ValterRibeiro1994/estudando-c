/*
Um professor quer sortear um dos seus quatro alunos para apagar o quadro. 
Faça um programa que ajude ele, lendo o nome dos alunos e escrevendo na 
tela o nome do escolhido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int gerar_indice_aleatorio(int limite) {
    return rand() % limite;
}

char* obter_nome(int tamanho){
    char* nome = malloc(tamanho * sizeof(char));
    if (nome == NULL) { return NULL; }

    printf("Informe o nome do aluno: ");
    fgets(nome, tamanho, stdin);

    nome[strcspn(nome, "\n")] = '\0';   // remove o \n, se existir
    return nome;
}

int main(void){
    srand(time(NULL));

    int limite_alunos = 4;
    int limite_nome_aluno = 20;

    char* alunos[limite_alunos];

    // preenche o vetor criado
    for (int i = 0; i < limite_alunos; i++){
        alunos[i] = obter_nome(limite_nome_aluno);
        printf("Aluno registrado: %s\n", alunos[i]);
    }

    // sortear o aluno aleatoriamente
    char* aluno_sorteado = alunos[gerar_indice_aleatorio(limite_alunos)];
    printf("Aluno Sorteado: %s", aluno_sorteado);

    // libera a memória no final
    for (int i = 0; i < limite_alunos; i++){
        free(alunos[i]);
    }

    return 0;
}
