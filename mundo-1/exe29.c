#include <stdio.h>

const int LIMITE = 80;
const float MULTA = 7.00; 

float calcularMulta(int velocidade){
    return ((float)velocidade - LIMITE) * MULTA;
}

int main(void){
    int velocidade;
    float resultado;
    
    printf("Informe a velocidade do veiculo em KM: ");
    scanf("%d", &velocidade);

    if (velocidade > LIMITE){
        resultado = calcularMulta(velocidade);
        printf("Veiculo acima da velocidade permitida !!!\n");
        printf("Multa avaliada em R$ %.2f\n", resultado);
        return 0;
    }

    printf("Veiculo dentro do limite de velocidade !!!\n");
    return 0;
}
