#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int n,n2;
    printf("Me diga dois números e eu colocarei os dois em ordem crescente.\n");
    printf("Primeiro número: ");
    scanf("%d",&n);
    printf("Segundo número: ");
    scanf("%d",&n2);
    if(n<n2){
        printf("Os número em ordem são %d e %d\n",n,n2);
    }else if(n>n2){
        printf("Os número em ordem são %d e %d\n",n2,n);
    }else{
        printf("Os dois numeros são iguais.\n");
    }
}