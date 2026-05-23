#include <stdio.h>

int getInt(char *mensagem){
    int n;
    printf(mensagem);
    scanf("%i", &n);
    return n;
}

int main(void) {
    int n = getInt("Informe um numero inteiro: ");
    if (n % 2 == 0){
        printf("O numero %i e PAR", n);
        return 0;
    }

    printf("O numero %i e IMPAR", n);
    return 0;
}