#include <stdio.h>

//4. Elabore um programa que leia um valor do tipo inteiro e, 
//por meio de função, atualize todas as posições de um vetor com o 
//número inteiro lido, depois imprima os valores. Utilize ponteiros 
//para as operações.

void atualizarVetor(int *vet, int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        *(vet + i) = valor;
    }
}

void main() {
    int vet[5];
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    
    atualizarVetor(vet, 5, valor);

    printf("Valores do vetor atualizados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", vet[i]);
    }
}
