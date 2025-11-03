#include <stdio.h>

/* 
    Exercicio 03: Crie um programa que leia dois numeros e mostre a soma entre eles
    - Esse exercicio me abriu para o conceito de referencia de memoria, a importancia 
    do tipo de dados, e o conceito do estouro de memoria se acaso o numero recebido for 
    maior que o necessario  
*/
int main(void) {
    long double x, y;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    
    printf("Digite o valor de y: ");
    scanf("%lf", &y);

    double total = x + y;
    printf("A soma de %.2f + %.2f = %.2f\n", x, y, total);

    return 0;
}
