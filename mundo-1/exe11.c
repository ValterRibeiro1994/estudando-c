#include <stdio.h>

float obter_numero(){
    float n;
    scanf("%f", &n);
    return n;
}

float obter_altura(){
    printf("Informe a altura da parede: ");
    return obter_numero();
}

float obter_largura(){
    printf("Informe a largura da parede: ");
    return obter_numero();
}

float obter_proporcao_tinta(){
    printf("Informe quantos metros quadrados a tinta faz por litro: ");
    return obter_numero();
}

float calcular_area(float a, float l){
    return a * l;
}

float calcular_tinta(float area, float metros_por_litro){
    return area / metros_por_litro;
}

int main(void){
    // variaveis
    float altura, largura, area, metros_por_litro, tinta;
    
    // entradas
    altura = obter_altura();
    largura = obter_largura();
    metros_por_litro = obter_proporcao_tinta();
    
    // processamento
    area = calcular_area(altura, largura);
    tinta = calcular_tinta(area, metros_por_litro);
    
    // saida
    printf("%.2f metros de altura * %.2f metros de largura = %.2f metros quadrados\n", altura, largura, area);
    printf("%.2f litros de tinta sao necessarios para pintar %.2f de area ", tinta, area);
    
    // fim
    return 0;
}