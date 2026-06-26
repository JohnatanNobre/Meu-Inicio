#include <stdio.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,desloc;
    printf("Digite o número: ");
    scanf("%d",&n1);
    printf("Digite o deslocamento: ");
    scanf("%d",&desloc);
    printf("\n------ OPERAÇÕES SHIFT ------\n");
    printf("Calculando %d >> %d é igual a %d.\n",n1,desloc,(n1>>desloc));
    printf("Calculando %d << %d é igual a %d.\n",n1,desloc,(n1<<desloc));
    
}