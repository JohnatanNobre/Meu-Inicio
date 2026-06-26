#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    float total_compras;
    printf("Qual foi o valor total das compras? R$ ");
    scanf("%f",&total_compras);
    printf("---------------------------------------------------------------------------\n");
    printf("Você comprou R$ %.2f na nossa loja.",total_compras);
    if(total_compras>500){
        printf("\n\n=================================ATENÇÃO===================================\n");
        printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto.\n",(total_compras*10/100));
        printf("O valor a ser pago é R$%.2f.",(total_compras-(total_compras*10/100)));
    }
    printf("Volte sempre!\n");
    printf("\n---------------------------------------------------------------------------");
}