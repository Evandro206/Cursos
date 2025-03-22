#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    float a;
    printf("Digite o primeiro coeficiente: ");
    scanf("%f", &a);
    for (int i = 0; i <= 10; i++){
        printf("%.2f X %d = %.2f\n", a, i, a * i);
    } 
}