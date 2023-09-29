#include <stdio.h>

//10. O departamento comercial da Batatinha S/A necessita atualizar 
//os valores de seus produtos no seu catálogo de vendas. O presidente 
//ordenou um reajuste de 4.78% para todos os itens. São 15 itens no
//catálogo. Sua tarefa é elaborar um programa que leia o valor atual
// dos produtos e armazene em um vetor, e após isso efetue o reajuste 
//no valor dos produtos. O reajuste (acesso ao vetor) deverá ser
//feito utilizando ponteiros. Imprima na tela o valor reajustado, 
//usando também ponteiros.


void reajustarProdutos(float *produtos, int tamanho, float taxa) {
    for (int i = 0; i < tamanho; i++) {
        *(produtos + i) *= (1 + taxa); 
}
}

void main() {
    int tamanho = 15;
    float produtos[tamanho];

   
    printf("Digite o valor atual de %d produtos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &produtos[i]);
    }

    float taxaReajuste = 0.0478; 

    
    reajustarProdutos(produtos, tamanho, taxaReajuste);

    
    printf("\nValores reajustados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Produto %d: %.2f\n", i + 1, *(produtos + i));
    }
}
