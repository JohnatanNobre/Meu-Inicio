#include <stdio.h>
#include <locale.h>
#include <string.h>

void main () {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um numero qualquer: ");
    scanf("%d",&num);
    printf("O numero %d que voce digitou é %s.", num, (num%2==0)?"PAR":"ÍMPAR");
}
