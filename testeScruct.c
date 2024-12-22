#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numero01, numero02;
}TP_dado;

void main(){
    TP_dado calculo;

    printf("Digite um valor para calcular as 4 operações\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", & calculo.numero01);
    printf("Digite o segundo valor: ");
    scanf("%d", &calculo.numero02);
    system("cls");

    printf("Resultados das 4 operações\n\n");
    printf("%d + %d = %d\n", calculo.numero01, calculo.numero02, calculo.numero01 + calculo.numero02);
    printf("%d - %d = %d\n", calculo.numero01, calculo.numero02, calculo.numero01 - calculo.numero02);
    printf("%d / %d = %d\n", calculo.numero01, calculo.numero02, calculo.numero01 / calculo.numero02);
    printf("%d X %d = %d\n", calculo.numero01, calculo.numero02, calculo.numero01 * calculo.numero02);
    system("pause");
}