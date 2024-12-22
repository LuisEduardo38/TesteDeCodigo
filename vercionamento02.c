#include <stdio.h>
#include <stdlib.h>

void main(){
    int numero01, numero02;

    printf("Diginte o primeiro valor: ");
    scanf("%d", &numero01); //O valor que o usuario digitar vai ser passado para essa variavel
    printf("Diginte o primeiro valor: ");
    scanf("%d", &numero02);

    system("cls");
    printf("O resultado da soma dos valores E: %d\n", numero01 + numero02);
    printf("O resultado da subtracao dos valores E: %d\n", numero01 - numero02);
    printf("O resultado da divisao dos valores E: %d\n", numero01 / numero02);
    printf("O resultado da multiplicacao dos valores E: %d\n", numero01 * numero02);
}