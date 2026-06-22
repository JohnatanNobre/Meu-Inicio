#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50];
    int idade;
    float peso;
    printf("Qual é seu nome?");
    fflush(stdin);
    gets(nome);
    printf("Qual é a sua idade?");
    fflush(stdin);
    scanf("%d",&idade);
    printf("Qual é seu peso?(Kg)");
    fflush(stdin);
    scanf("%f",&peso);
    printf("seu nome é %s voce tem %i e pesa %.2f Kg",nome,idade,peso);





}