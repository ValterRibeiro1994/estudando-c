#include <stdio.h>

float obter_valor(){
    float n;
    scanf("%f", &n);
    return n;
}

float obter_cotacao(){
    printf("Informe o valor do dolar hoje: ");
    return obter_valor();
}

float obter_total_reais(){
    printf("Informe o valor em Reais para conversao: ");
    return obter_valor();
}

float converter_real_para_dolar(float total_real, float taxa_cambio){
    return total_real / taxa_cambio;
}

int main(void){
    float taxa_cambio, total_reais, resultado;
    taxa_cambio = obter_cotacao();
    total_reais = obter_total_reais();
    resultado = converter_real_para_dolar(total_reais, taxa_cambio);
    printf("Resultado da conversao: %.2f dolares", resultado);
    return 0;
}