#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n =  rand() %4;
    int escolha;
    printf("vou pensar em um numero de 0 a 3, tente adivinhar\n");
    printf("Qual é o seu palpite? ");
    scanf("%i",&escolha);
    printf("\nSeu número é : %i\nE o número que pensei foi: %i\n",escolha,n);

    
}