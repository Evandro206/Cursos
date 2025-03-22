#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    float altura, largura;
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);
    printf("Digite a largura do retangulo: ");
    scanf("%f", &largura);
    printf("Area = %.2f\nPerimetro = %.2f\n", altura * largura, (altura * 2) + (largura * 2));
}