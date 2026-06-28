#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int n,n2;
    char escolha;
    printf("========== CALCULADORA ==========\n");
    printf("VALOR 1: ");
    scanf("%d",&n);
    printf("VALOR 2: ");
    scanf("%d",&n2);
    printf("==================================\n");
    printf("+\t Adição\n");
    printf("-\t Subtração\n");
    printf("*\t Multiplicação\n");
    printf("/\t Divisão\n");
    printf("\n==================================");
    printf("\nDigite sua opção => ");
    scanf(" %c",&escolha);
    switch (escolha){
        case '+':
            printf("\n==================================\n");
            printf("O resultado de %d %c %d = %d.",n,escolha, n2,(n+n2));
            printf("\n==================================");
            break;
        case '-':
            printf("\n==================================\n");
            printf("O resultado de %d %c %d = %d.",n,escolha, n2,(n-n2));
             printf("\n==================================");
            break;
        case '*':
            printf("\n==================================\n");
            printf("O resultado de %d %c %d = %d.",n,escolha, n2,(n*n2));
            printf("\n==================================");
            break;
        case '/':
            printf("\n==================================\n");
            printf("O resultado de %d %c %d = %.2f.",n,escolha, n2,((float)n/n2));
            printf("\n==================================");
            break;
        
        default:
            printf("\nOpção inválida, tente novamente!\n");
            break;
    }
}
