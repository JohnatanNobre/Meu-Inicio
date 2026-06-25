#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char letra,ant,dep;
    printf("Digite uma Letra: ");
    scanf("%c",&letra);
    ant=letra-1;
    dep=letra+1;
    printf("Antes da letra %c, temos a letra %c.Depois temos a letra %.c",letra,ant,dep);
}