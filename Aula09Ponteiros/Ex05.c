#include <stdio.h>

//5. Faça um programa que receba dois valores inteiros,
// após receber esses dois valores, uma função deve
//calcular e retornar para o programa o resultado da soma 
//e da subtração dos valores. Obs.: Apenas uma
//função deve realizar esta operação, desta forma, faça uso de ponteiros.

void calcSomaSubtracao(int a, int b, int *soma, int *subtracao) {
    *soma = a + b;
    *subtracao = a - b;
}

void main() {
    int valor1, valor2;
    int resulSoma, resulSubtracao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    
    calcSomaSubtracao(valor1, valor2, &resulSoma, &resulSubtracao);

    printf("Resultado da soma: %d\n", resulSoma);
    printf("Resultado da subtração: %d\n", resulSubtracao);
}