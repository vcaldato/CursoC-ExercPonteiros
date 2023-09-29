#include <stdio.h>

//9. A Google está desenvolvendo um novo sistema operacional para máquinas
// de venda de bolinhas de borracha de R$1,00, mas precisa realizar testes 
//no Gerenciador de Memória desse novo sistema. Você fo contratado para fazer
// um programa para verificar se o gerenciador de memória está funcionando
//corretamente. Seu programa deverá ler 3 números inteiros, 3 números decimais, 
//3 letras, armazená-las em variáveis, e depois, através de ponteiros, trocar 
//os seus valores, substituindo todos os números inteiros pelo número 2014, os 
//decimais por 9.99, e as letras por ’Y’. Depois da substituição, o programa deverá exibir o
//valor das variáveis já devidamente atualizados.

void main() {
    int inteiros[3];
    double decimais[3];
    char letras[3];

    
    printf("Digite 3 números inteiros:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &inteiros[i]);
    }
    printf("Digite 3 números decimais:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &decimais[i]);
    }
    printf("Digite 3 letras:\n");
    for (int i = 0; i < 3; i++) {
        scanf(" %c", &letras[i]); 
    }

    
    for (int i = 0; i < 3; i++) {
        inteiros[i] = 2014;
        decimais[i] = 9.99;
        letras[i] = 'Y';
    }

    
    printf("\nValores atualizados:\n");
    for (int i = 0; i < 3; i++) {
        printf("Inteiro: %d\n", inteiros[i]);
        printf("Decimal: %.2lf\n", decimais[i]);
        printf("Letra: %c\n", letras[i]);
    }

}

