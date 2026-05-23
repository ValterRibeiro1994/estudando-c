#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarNumeroAleatorio(int max) {
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    return rand() % (max + 1);
}

int main() {
    int numero_secreto = gerarNumeroAleatorio(5);
    int resposta_usuario;

    printf("Tente adivinhar o numero secreto (entre 0 e 5): ");
    scanf("%d", &resposta_usuario);

    if (resposta_usuario == numero_secreto) {
        printf("Parabens! Voce acertou o numero secreto.\n");
    } else {
        printf("Voce errou. O numero secreto era %d.\n", numero_secreto);
    }

    return 0;
}