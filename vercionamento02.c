#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero01, numero02, resultado;

    printf("Diginte o primeiro valor: ");
    scanf("%d", &numero01);
    printf("Diginte o primeiro valor: ");
    scanf("%d", &numero02);

    resultado = numero01 + numero02;

    system("cls");
    printf("O resultado da soma dos valores E: %d\n", resultado);
}