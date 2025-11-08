#include <stdio.h>
// Faça um algoritmo que leia o salário de um funcionário e mostre seu novo salário, com 15% de aumento.

float obter_salario(){
    float s; 
    printf("Informe o salario: : ");
    scanf("%f", &s);
    return s;
    }
    
float calcular_aumento(float salario, int aumento){
    return salario * ( aumento /  100.0);
    }
    
int main(void){
    
    // entrada
    float salario = obter_salario();
    
    // processamento
    float aumento = calcular_aumento(salario, 15);
    float novo_salario = salario + aumento;
    
    // saida
    printf("\nsalario sem aumento: %.2f", salario);
    printf("\nValor do aumento: %.2f", aumento);
    printf("\nNovo salario: %.2f", novo_salario);
    
    // fim
    return 0;
    }
