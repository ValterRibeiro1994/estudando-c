#include <stdio.h>
/*
    Crie um programa que leia um número Real qualquer pelo teclado e 
    mostre na tela a sua porção Inteira.
*/

float obter_numero_real(){
    float n;
    printf("Informe um numero real: ");
    scanf("%f", &n);
    return n;
}

int obter_parte_inteira(float n){
    return (int) n;
}

// extra - apenas separa e guarda as duas partes do numero
float obter_parte_decimal(float n){
    int parte_inteira = obter_parte_inteira(n);
    return n - parte_inteira;
}

int main(void){
    float numero = obter_numero_real();
    int parte_inteira = obter_parte_inteira(numero);
    float parte_decimal = obter_parte_decimal(numero); 
    printf("Parte inteira: %i\n", parte_inteira);
    printf("Parte Decimal: %.2f\n", parte_decimal);
    return 0;
}