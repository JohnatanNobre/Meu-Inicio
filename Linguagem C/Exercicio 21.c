#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%d",&n);
    if(n>0){
        printf("O inverso de %d é %.2f",n,(1/(float)n));
    } else {
        printf("O oposto de %d é %d",n,-n);
    }
}