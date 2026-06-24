#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    printf("Digite uma Letra: ");
    scanf("%c",&letra);
    char ant=letra-1;
    char dep=letra+1;
    printf("Antes da letra %c, temos a letra %c.Depois temos a letra %.c",letra,ant,dep);
}