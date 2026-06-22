#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    int idade;
    float peso;
    printf("Qual é seu nome? ");
    fflush(stdin);
    gets(nome);
    printf("Qual é a sua idade? ");
    fflush(stdin);
    scanf("%d",&idade);
    printf("Qual é seu peso?(Kg) ");
    fflush(stdin);
    scanf("%f",&peso);
    printf("\nMuito prazer, %s. Você tem %i anos e pesa %.2fKg.\n",nome,idade,peso);





}