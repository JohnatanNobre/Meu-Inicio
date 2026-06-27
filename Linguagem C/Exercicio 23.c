#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Me diga um número e eu te direi se ele é POSITIVO, NEGATIVO OU NULO.\n");
    printf("Digite um número: ");
    scanf("%d",&n);
    if(n>0){
        printf("O número %d é POSITIVO\n",n);
    }else if(n<0){
        printf("O número %d é NEGATIVO\n",n);
    }else{
        printf("O número %d é NULO\n",n);
    }
}