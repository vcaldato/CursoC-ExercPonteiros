#include <stdio.h>

//7. Considere um vetor de 10 elementos, contendo valores inteiros.
// Faça um programa que leia os valores para preencher esse vetor,
// após a leitura o programa deve invocar uma função que calcule e devolva as
//frequências absoluta e relativa desses valores no conjunto. (Observação: a 
//frequência absoluta de um valor é o número de vezes que esse valor aparece 
//no conjunto de dados; a frequência relativa é a frequência absoluta dividida
// pelo número total de dados.). Utilize outros dois vetores para
//armazenar as frequências relativas e absolutas e ao final do programa,
// imprima de forma tabulada os números e suas frequências absoluta e relativa.

void calcularFrequencias(int *vet, int *frequenAbsoluta, float *frequenRelativa, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int valor = *(vet + i);
        int frequencia = 0;

        
        for (int j = 0; j < tamanho; j++) {
            if (*(vet + j) == valor) {
                frequencia++;
            }
        }
        *(frequenAbsoluta + i) = frequencia;

        
        *(frequenRelativa + i) = (float)frequencia / tamanho;
    }
}

void main() {
    int tamanho = 10;
    int vet[tamanho];
    int frequenAbsoluta[tamanho];
    float frequenRelativa[tamanho];

    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet[i]);
    }

    calcularFrequencias(vet, frequenAbsoluta, frequenRelativa, tamanho);

    printf("\nValor\tFrequencia Absoluta\tFrequencia Relativa\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\t%d\t\t\t%.2f\n", vet[i], frequenAbsoluta[i], frequenRelativa[i]);
    }

}