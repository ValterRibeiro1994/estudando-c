#include <stdio.h>

float obter_nota(){
    float n;
    scanf("%f", &n);
    return n;
}

float calcular_media(float n1, float n2){
    return (n1 + n2) / 2.0;
}

int main(void){
    float n1, n2, media;
    printf("Informe a primeira nota: ");
    n1 = obter_nota();
    printf("\nInforme a segunda nota: ");
    n2 = obter_nota();

    media = calcular_media(n1, n2);
    printf("A media das notas: %.2f", media);
    return 0;
}