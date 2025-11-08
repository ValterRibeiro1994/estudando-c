#include <stdio.h>

// Escreva um programa que converta uma temperatura digitando em graus Celsius e converta para graus Fahrenheit.

float obter_celsius(){
    float c;
    printf("Informe a temperatura em celsius: ");
    scanf("%f", &c);
    return c;
    }
    
float converter_fahrenheit(float celsius){
     return (celsius * (9.0 / 5.0)) + 32.0;
     }
     
int main(void){
    // entrada
    float celsius = obter_celsius();
    
    // processamento
    float fahrenheit = converter_fahrenheit(celsius);
    
    // saida
    printf("\nCelsius: %.2f", celsius);
    printf("\nFahrenheit: %.2f", fahrenheit);
    
    // fim
    return 0;
}
