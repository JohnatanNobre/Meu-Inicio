#include <stdio.h>
#include <string.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("\n------ OPERAÇÕES BIWISE ------\n");
    printf("Calculando %d & %d é igual a %d.\n",n1,n2,(n1&n2));
    printf("Calculando %d | %d é igual a %d.\n",n1,n2,(n1|n2));
    printf("Calculando %d ^ %d é igual a %d.\n",n1,n2,(n1^n2));
}
    