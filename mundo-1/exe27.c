#include <stdio.h>
#include <string.h>

#define LIMITE_STRING 100
#define LIMITE_NOMES 5
#define LIMITE_NOME_UNICO 20

void get_string(char *interface_user, char *string){
    printf("%s", interface_user);
    fgets(string, LIMITE_STRING, stdin);
    // strcspn retorna a posição da primeira ocorrencia encontrada na string 1 indentica da segunda string
    string[strcspn(string, "\n")] = '\0';
}

void get_nome(char *string){
    
    get_string("Digite o nome completo: ", string);
}

void get_nomes_separados(char *nome, char nomes_separados[LIMITE_NOMES][LIMITE_NOME_UNICO]){
    int i = 0;
    char *token = strtok(nome, " ");
    while (token != NULL && i < LIMITE_NOMES){
        strncpy(nomes_separados[i], token, LIMITE_NOME_UNICO - 1);
        nomes_separados[i][LIMITE_NOME_UNICO - 1] = '\0';
        i++;
        token = strtok(NULL, " ");
    }
}

int contar_vetor_str(char nomes_separados[LIMITE_NOMES][LIMITE_NOME_UNICO]){
    int count = 0;    
    for (int i = 0; i < LIMITE_NOMES; i++){
        if (nomes_separados[i][0] != '\0'){
            count++;
        }
    }
    return count;   
}

int main(void){
    // obter nome do usuario
    char nome_completo[LIMITE_STRING];
    char nomes_separados[LIMITE_NOMES][LIMITE_NOME_UNICO] = {0}; // 5 nomes com 20 letras cada no máximo
    char nome_copia[LIMITE_STRING];

    get_nome(nome_completo);
    strcpy(nome_copia, nome_completo);

    get_nomes_separados(nome_copia, nomes_separados);
    int nomes_encontrados = contar_vetor_str(nomes_separados);
    printf("\nNome completo: %s", nome_completo);
    printf("\nPrimeiro Nome: %s", nomes_separados[0]);
    printf("\nUltimo Nome: %s\n", nomes_separados[nomes_encontrados - 1]);
}