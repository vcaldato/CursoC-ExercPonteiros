#include <stdio.h>
#include <string.h>

//3. Implemente um programa que leia uma mensagem e um caractere. 
//Após a leitura, o programa deve, pormeio de função, retirar todas
// as ocorrências do caractere informado na mensagem colocando * em
// seu lugar. Afunção deve também retornar o total de caracteres
// retirados. Ao final, o programa deve imprimir a frase ajustada
//e a quantidade de caracteres substituídos.

void substituirCaractere(char *frase, char caractere, int *totalSubstituidos) {
    int tamanho = strlen(frase);
    for (int i = 0; i < tamanho; i++) {
        if (frase[i] == caractere) {
            frase[i] = '*';
            (*totalSubstituidos)++;
        }
    }
}
void main() {
    char mensagem[1000];
    char caractere;
    int totalSubstituidos = 0;

    printf("Digite a mensagem: ");
    scanf(" %[^\n]s", &mensagem); 
    
    printf("Digite o caractere: ");
    scanf(" %c", &caractere);

    substituirCaractere(mensagem, caractere, &totalSubstituidos);

    printf("Frase ajustada: %s\n", mensagem);
    printf("Quantidade de caracteres substituídos: %d\n", totalSubstituidos);
}
