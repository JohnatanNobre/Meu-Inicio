#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    float distancia,valor;
    printf("========== TABELA DE PREÇOS ==========\n");
    printf("Viagens até 200km -\t    R$0,50/km\n");
    printf("Viagens a partir de 200km - R$0,35/km\n");
    printf("--------------------------------------\n");
    printf("Distancia total da viagem, em Km: ");
    scanf("%f",&distancia);
    if(distancia<=200){
        printf("\nUma viagem de %.2f Km, vaicustar R$0,50/km\n",distancia);
        printf("Valor Total: %.2f",distancia*0.5);
    } else{
        printf("\nUma viagem de %.2f Km, vai custar R$0,35/km\n",distancia);
        printf("Valor Total: %.2f",distancia*0.35);
    }
}