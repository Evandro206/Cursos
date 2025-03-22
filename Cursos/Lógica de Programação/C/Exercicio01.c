#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    float a, b, c, delta, x1, x2;
    printf("Digite o primeiro coeficiente: ");
    scanf("%f", &a);
    printf("Digite o segundo coeficiente: ");
    scanf("%f", &b);
    printf("Digite o terceiro coeficiente: ");
    scanf("%f", &c);
    delta = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("X1 = %.2f\nX2 = %.2f\nDelta = %.2f\n", x1, x2, delta);
}