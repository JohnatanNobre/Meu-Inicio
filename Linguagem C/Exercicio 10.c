#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char produto[20];
    float preco;
    int desconto;
    printf("Produto: ");
    fgets(produto,sizeof(produto),stdin);
    produto[strcspn(produto, "\n")] = '\0'; 
    printf("Preço de %s: R$",produto);
    scanf("%f",&preco);
    printf("Desconto: (%%): ");
    scanf("%d",&desconto);
    float total=preco-(preco*desconto/100);
    printf("O produto %s custava R$%.2f,mas com %d%% de desconto, passa a custar R$%.2f",produto,preco,desconto,total);
}