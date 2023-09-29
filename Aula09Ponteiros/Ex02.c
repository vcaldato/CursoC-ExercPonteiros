#include <stdio.h>
//2. Crie um programa que leia números reais em um vetor de tamanho 10.
// Imprima o endereço de cada posição desse vetor.

void main() {
    float vetor[10];

    printf("Digite 10 números reais:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    printf("Endereços das posições do vetor usando ponteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Endereço da posição %d: %p\n", i, &vetor[i]);
    }
}
