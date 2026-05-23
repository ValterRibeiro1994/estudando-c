#include <stdio.h>

const float PRECO_VIAGEM_LONGA = 0.45;
const float PRECO_VIAGEM_CURTA = 0.50;
const int  LIMITE_VIAGEM = 200;

int getInt(char *mensagem){
    int n;
    printf(mensagem);
    scanf("%i", &n);
    return n;
}



int main(void) {
    int distancia = getInt("Informe a distancia da viagem em KM: ");
    float resultado;
    if (distancia < LIMITE_VIAGEM){
        resultado = PRECO_VIAGEM_CURTA * distancia;
    } else {
        resultado = PRECO_VIAGEM_LONGA * distancia;
    }

    printf("O preco da passagem para essa viagem e de R$: %.2f", resultado);
    return 0;
}