#include <stdio.h>

//4. Faça um programa que leia um vetor com tamanho 10 de números inteiros.
// Após ler, uma função deve verificar se o vetor está ordenado, de forma
// crescente ou decrescente, ou se não está ordenado. Imprimir essa
//resposta no final do programa.

int verificar(int vet[], int tamanho) {
    int crescente = 1; 
    int decrescente = 1; 
    
    for (int i = 1; i < tamanho; i++) {
        if (vet[i] > vet[i - 1]) {
            decrescente = 0; 
        } else if (vet[i] < vet[i - 1]) {
            crescente = 0; 
        }
    }
    
    if (crescente)
        return 1; 
    else if (decrescente)
        return 2; 
    else
        return 0; 
}

void main() {
    int vet[10];
    
    printf("Digite 10 números inteiros:\n");
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    
    int resultado = verificar(vet, 10);
    
    if (resultado == 1) {
        printf("O vetor está ordenado de forma crescente.\n");
    } else if (resultado == 2) {
        printf("O vetor está ordenado de forma decrescente.\n");
    } else {
        printf("O vetor não está ordenado.\n");
    }
    
}