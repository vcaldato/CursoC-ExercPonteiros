#include <stdio.h>
#include <stdlib.h>

//1. Faça um programa que leia o saldo e o % de reajuste de uma aplicação 
//financeira e imprimir o novo saldo após o reajuste. O cálculo deve ser 
//feito por uma função.

float calcNovoSaldo(float saldo, float taxaReajuste) {
    float nvSaldo;
    nvSaldo = saldo + (saldo * taxaReajuste / 100);
    return nvSaldo;
}
void main(){
    float saldo, taxaReajuste, nvSaldo;

    printf("Informe seu saldo: \n");
    scanf("%f", &saldo);

    printf("Informe a taxa de reajuste: \n");
    scanf("%f",&taxaReajuste);

    nvSaldo = calcNovoSaldo(saldo, taxaReajuste);
    printf("Novo saldo é : %.2f",nvSaldo);

}

