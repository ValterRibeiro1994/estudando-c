/* 
    - Links de referencia
        - Univesp (youtube): https://www.youtube.com/watch?v=x2DwllnUZDg&list=PLxI8Can9yAHf8k8LrUePyj0y3lLpigGcl&index=27
        - CS50 - Harward: https://www.youtube.com/watch?v=E4lb2gkyXr8

*/

#include <stdio.h>
// struct - define uma estrutura com os campos definidos dentro das chaves({})
// typedef define o nome para o que foi definido, como um novo tipo de dado

typedef struct
{
    int peso; // quilogramas
    int altura; // centimetros
} PesoAltura; // Nome do tipo de dado

int main(void){
    // declara a struct
    PesoAltura pessoa;

    // define o peso
    pessoa.peso = 68;
    pessoa.altura = 185;

    // exibe os dados
    printf("--- Dados da pessoa ---");
    printf("\nPeso: %i kilos", pessoa.peso);
    printf("\nAltura: %i centimetros", pessoa.altura);

}
// apos a aula 2 da univesp, percebi a necessidade de dominar ponteiros
