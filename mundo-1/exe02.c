#include <stdio.h>

/* Exercicio 02: Crie um programa que leia o nome do usuario e envia uma mensagem de boas vindas
   Esse exercicio me permitiu entender melhor como funciona os caracteres por assim dizer
   Strings são arrays de caracteres, scanf resolve o exercicio mas é ineficiente para casos mais complexos
   Também deve ter cuidado com a memoria, sempre é bom lembrar de adicionar o caractere nulo para indicar o final do array.


*/
int main(void){
    char pessoa[15];
    pessoa[14] = '\0'; // isso não impede de erros por excesso de caracteres.
    printf("Digite seu nome: ");
    scanf("%s", pessoa); // Só pega o primeiro nome antes do primeiro espaço
    printf("Bem vindo %s.\n", pessoa);
    return 0;
}