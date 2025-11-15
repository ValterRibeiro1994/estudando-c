#include <stdio.h>
#define _USE_MATH_DEFINES // Necessário para que M_PI seja definido
#include <math.h>

float get_float(void){
    float n;
    scanf("%f", &n);
    return n;
}

float obter_angulo(void){
    printf("Informe o angulo: ");
    return get_float();
}

float calcular_seno(float angulo){
    // o retorno das funções é do tipo double
    return (float) sin(angulo);
}

float calcular_cosseno(float angulo){
    return (float) cos(angulo);
}

float calcular_tangente(float angulo){
    return (float) tan(angulo);
}

float calcular_radiano(float angulo_em_graus){
    return angulo_em_graus * (M_PI / 180.0);
}

int main(void){
    // variaveis
    float angulo, radianos, seno, cosseno, tangente;

    // entrada
    angulo = obter_angulo(); // representa o *a*ngulo em graus

    // processamento
    radianos = calcular_radiano(angulo);
    seno = calcular_seno(radianos);
    cosseno = calcular_cosseno(radianos);
    tangente = calcular_tangente(radianos);

    // saída
    printf("Seno: %.2f\n", seno);
    printf("Cosseno: %.2f\n", cosseno);
    printf("Tangente: %.2f\n", tangente);

    // fim
    return 0;
}