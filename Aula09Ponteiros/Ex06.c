#include <stdio.h>

//6. Construa uma função que, recebendo como parâmetros quatro número
// inteiros, devolva ao módulo queo chamou os doismaiores números dentre
// os quatro recebidos. Faça umprograma que leia tantos conjuntos
//de quatro valores quantos o usuário deseje e que acione a função para cada
// conjunto de valores,apresentando a cada vez os dois maiores números.
// Se preferir, utilize vetor para armazenar o conjunto de valores.

void doisMaiores(int a, int b, int c, int d, int *maior1, int *maior2) {
    if (a > b) {
        *maior1 = a;
        *maior2 = b;
    } else {
        *maior1 = b;
        *maior2 = a;
    }

    if (c > *maior1) {
        *maior2 = *maior1;
        *maior1 = c;
    } else if (c > *maior2) {
        *maior2 = c;
    }

    if (d > *maior1) {
        *maior2 = *maior1;
        *maior1 = d;
    } else if (d > *maior2) {
        *maior2 = d;
    }
}

void main() {
    int conjunto[4];
    int maior1, maior2;
    char continuar;

    do {
        printf("Digite quatro valores inteiros separados por espaços: ");
        scanf("%d %d %d %d", &conjunto[0], &conjunto[1], &conjunto[2], &conjunto[3]);

        doisMaiores(conjunto[0], conjunto[1], conjunto[2], conjunto[3], &maior1, &maior2);

        printf("Os dois maiores números são: %d e %d\n", maior1, maior2);

        printf("Deseja continuar (S/n)? ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');
}