/*
O mesmo professor do desafio 19 quer sortear a ordem de apresentação de trabalhos dos alunos. 
Faça um programa que leia o nome dos quatro alunos e mostre a ordem sorteada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const int limiteString = 20;
const int limiteAlunos = 4;

int gerar_indice_aleatorio() {
    return rand() % limiteAlunos;
}

char* obterNome(){
    char* nome = malloc(limiteString * sizeof(char));
    if (nome == NULL) {return NULL;}

    printf("Informe o nome do aluno: ");
    fgets(nome, limiteString, stdin);

    nome[strcspn(nome, "\n")] = '\0';
    return nome;
}

int main(void){
    srand(time(NULL));

    char* alunos[limiteAlunos];
    int alunos_index[limiteAlunos];

    for (int x = 0; x < limiteAlunos; x++){
        alunos_index[x] = -1;
        alunos[x] = obterNome();
    }

    int index = 0;
    while (index < limiteAlunos)
    {
        int encontrado = 0;

        // gera um numero aleatorio
        int n = gerar_indice_aleatorio();
        
        // verifica se ele ja foi sorteado
        for (int x = 0; x < limiteAlunos; x++){
            if (n == alunos_index[x]){ // se sim sorteia outro numero
                encontrado = 1;
                break;
            }
        }

        if (encontrado == 0){
            // se não foi encontrado adicione ele em alunos_index
            alunos_index[index] = n;
            index++;
        }
        // se foi encontrado continue sem fazer nada
    }
    
    // agora apenas exibo a ordem dos alunos
    for (int x = 0; x < limiteAlunos; x++){
        int posicao = alunos_index[x];
        printf("\n%d - %s", x + 1, alunos[posicao]);
        free(alunos[posicao]);
    }
}