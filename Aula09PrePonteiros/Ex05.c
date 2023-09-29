#include <stdio.h>
//5 . Faça um programa que leia um vetor com tamanho 10 de números inteiros.
// Após ler, uma função deve criar um novo vetor com base no primeiro, mas,
// o novo vetor deve ser ordenado de forma crescente. O programa
//deve imprimir este novo vetor após a ordenação.

void ordenaCrescente(int vet[], int tamanho){
    int temp;
     for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vet[i] > vet[j]) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

void main() {
    int vet[10];
    
    printf("Digite 10 números inteiros:\n");
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    
  
    ordenaCrescente(vet, 10);
    
    printf("Vetor ordenado de forma crescente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    
   
}







