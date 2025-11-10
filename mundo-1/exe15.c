#include <stdio.h>
/*
    Escreva um programa que pergunte a quantidade de Km percorridos por 
    um carro alugado e a quantidade de dias pelos quais ele foi alugado. 
    Calcule o preço a pagar, sabendo que o carro custa R$60 por dia e R$0,15 por 
    Km rodado.
*/

float obter_quilometros(){
    float km;
    printf("Informe o numero de Km's percorrido: ");
    scanf("%f", &km);
    return km;
}

int obter_dias(){
    int d;
    printf("Informe os dias alugado: ");
    scanf("%i", &d);
    return d;
}

float calcular_km(float preco_km, float km_rodado){
    return km_rodado * preco_km;
}

float calcular_dia(int dias, float preco){
    return dias * preco;
}

int main(void){
    float preco_km = 0.15;
    int preco_dia = 60;
    
    // entrada
    float km_rodado = obter_quilometros();
    int dias_alugados = obter_dias();

    // processar
    float divida = calcular_km(preco_km, km_rodado) + calcular_dia(dias_alugados, preco_dia);

    // saida
    printf("Valor a pagar pelo aluguel do carro %.2f R$\n\n", divida);

    return 0;
}