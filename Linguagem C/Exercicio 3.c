#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    int idade;
    float peso;
    printf("Qual é seu nome? ");    
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("Qual é a sua idade? ");
    scanf("%d",&idade);
    printf("Qual é seu peso?(Kg) ");
    scanf("%f",&peso);
    printf("\nMuito prazer, %s. Você tem %i anos e pesa %.2fKg.\n",nome,idade,peso);





}