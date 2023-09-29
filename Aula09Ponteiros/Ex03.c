#include <stdio.h>

//3. Crie um programa que contenha um vetor de inteiros com tamanho 5.
// Utilizando apenas ponteiros, leia valores e armazene neste vetor 
//e após isso, imprima o dobro de cada valor lido.

void main() {
    int vet[5];
    int *ptr = vet;

    printf("Digite 5 valores inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);

    }
    printf("O dobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i) * 2); 
    }
}