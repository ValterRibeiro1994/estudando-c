#include <stdio.h>

int dobrar_numero(int n){
    return n * 2;
}

int triplicar_numero(int n){
    return n * 3;
}

float calcular_raiz_quadrada(int n, float precisao){
    int parte_inteira = 1;
    while (1){
        if (parte_inteira * parte_inteira <= n){
            parte_inteira++;
        } else {
            parte_inteira--;
            break;
        }
    }

    float parte_decimal = (float) parte_inteira + precisao;
    while (1){
        if (parte_decimal * parte_decimal <= n){
            parte_decimal += precisao;
        } else {
            parte_decimal -= precisao;
            break;
        }
    }
    return parte_decimal;
}

int main(void){
    int n;
    int dobro;
    int triplo;
    float raiz; // raiz quadrada

    printf("Digite um numero: ");
    scanf("%i", &n);

    dobro = dobrar_numero(n);
    triplo = triplicar_numero(n);
    raiz = calcular_raiz_quadrada(n, 0.000001); // 6 casas de precisao

    printf("\nValor de N: %i", n);
    printf("\nDobro de N: %i", dobro);
    printf("\nTriplo de N: %i", triplo);
    printf("\nRaiz quadrada de N: %.6f", raiz);
    return 0;
}