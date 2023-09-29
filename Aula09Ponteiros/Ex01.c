#include <stdio.h>

//1. Escreva um programa que contenha duas variáveis inteiras.
// Compare seus endereços e exiba o maior endereço.
void main(){

int a, b;
    int *pA = &a;
    int *pB = &b;

    printf("Endereço de a: %p\n", pA);
    printf("Endereço de b: %p\n", pB);

    if (pA > pB) {
        printf("O maior endereço é de a: %p\n", pA);
    } else if (pB > pA) {
        printf("O maior endereço é de b: %p\n", pB);
    } else {
        printf("Os endereços são iguais: \n");
    }
}