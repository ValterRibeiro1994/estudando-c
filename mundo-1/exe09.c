#include <stdio.h>

int obter_tabuada(){
    int n;
    scanf("%i", &n);
    return n;
}

int gerar_tabuada(int n){
    printf("\n--- tabuada do %i ---\n", n);
    for (int x = 0; x < 11; x++){
        printf("\n %i x %i = %i", n, x, (n*x));
    }
    printf("\n------------------------------");
}

int main(void){
    int tabuada;
    printf("\ninforme o valor da tabuada: ");
    tabuada = obter_tabuada();
    gerar_tabuada(tabuada);
}