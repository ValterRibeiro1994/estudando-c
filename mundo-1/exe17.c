//  Faça um programa que leia: 
//  o comprimento do cateto oposto e o do cateto adjacente de um triângulo retângulo. 
//  Calcule e mostre o comprimento da hipotenusa.
#include <stdio.h>
float getFloat(){
    float n;
    scanf("%f", &n);
    return n;
}

float getOppositeLeg(){
    printf("Informe o comprimento em metros do cateto oposto: ");
    return getFloat();
}

float getAdjacentLeg(){
    printf("Informe o comprimento em metros do cateto adjacente: ");
    return getFloat();
}

// formula para hipotenusa com base nos catetos
// Hipotenusa ao quadrado é igual a soma dos quadrados dos catetos

// essa função eleva os parametros e realiza a soma
float calculateTheSumOfTheLegs(float a, float b){
    return (a * a) + (b * b);
}

// para saber o valor correto da hipotenusa devo realizar a radiação
float squareRoot(float n){
    int wholePart = 1; // variavel para armazenar a parte inteira
    while (1){
        if (wholePart * wholePart <= n){
            wholePart++;
        } else {
            // ele vai passar do limite
            wholePart--;
            break;
        }
    }

    // a altura vai ser recebida em metros, 3 casas de precisão é suficiente
    float decimalPart = 0.001;

    // somar a parte inteira com a parte decimal
    // ela tambem guarda o resultado da raiz
    float resultOfTheRoot = (float) wholePart + decimalPart;

    while (1){
        if (resultOfTheRoot * resultOfTheRoot <= n){
            resultOfTheRoot += decimalPart;
        }
        else {
            resultOfTheRoot -= decimalPart;
            break;
        }
    }
    return resultOfTheRoot;
}

int main(void){
    float oppositeLeg = getOppositeLeg();
    float adjacentLeg = getAdjacentLeg();
    float sumOfTheLegs = calculateTheSumOfTheLegs(oppositeLeg, adjacentLeg);
    float hypotenuseLength = squareRoot(sumOfTheLegs);
    printf("Comprimento da hipotenusa em metros: %.3f", hypotenuseLength);
    return 0;
}