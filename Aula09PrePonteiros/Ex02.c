#include <stdio.h>

//2- Faça um programa que leia o raio de um círculo e imprima
// o perímetro e a área. Para fazer os cálculos, implemente duas 
//funções, cada uma deve realizar um cálculo específico conforme solicitado. 
//Utilize as fórmulas a seguir.
// perimetro = 2 x pi x raio
// area = pi x raio2

float calcPerimetro(float raio){
    float perimetro = 2 * 3.14 * raio;
    return perimetro;
}
float calcArea(float raio){
    float area = 3.14 *(raio * raio);
    return area;
}
void main(){
    float raio, perimetro, area;

    printf("Informe o raio do circulo: \n");
    scanf("%f",&raio);

    perimetro = calcPerimetro(raio);
    area = calcArea(raio);


    printf("O perimetro do circulo é: %.2f\n",perimetro);
    printf("A área do circulo é: %.2f\n",area);


}