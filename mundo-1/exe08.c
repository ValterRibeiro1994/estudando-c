#include <stdio.h>

float obter_metros(){
    float n;
    scanf("%f", &n);
    return n;
}

float calcular_cm(float metros){
    // de metro para cm se multiplica por 100
    return metros * 100.0;
}

float calcular_mm(float metros){
    // de metro para mm se multiplica por 1000
    return metros * 1000.0;
}

int main(void){
    // var
    float m, cm, mm;
    
    // saida usuario
    printf("Informe o valor em metros: ");

    // entrada usuario
    m = obter_metros();

    // processo
    cm = calcular_cm(m);
    mm = calcular_mm(m);

    // saida usuario
    printf("\n%.2f metros tem %.2f cm", m, cm);
    printf("\n%.2f metros tem %.2f mm", m, mm);
    return 0;
}