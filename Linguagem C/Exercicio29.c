#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int escolha;
    float preco;
    printf("========== Seu peso nos Planetas ==========\n");
    printf("Digite o preço de um produto: ");
    scanf("%f",&preco);
    printf("\n==================================\n");
    printf("\t ESCOLHA UM PERIODO\n");
    printf("==================================\n");
    printf("1\t Carnaval [+10%%]\n");
    printf("2\t Férias Escolares [+20%%]\n");
    printf("3\t Dia da Crianças [+5%%]\n");
    printf("4\t Black Friday [-30%%]\n");
    printf("5\t Natal [-5%%]\n");
    printf("\n==================================");
    printf("\nDigite sua opção => ");
    scanf("%d",&escolha);
    printf("\n--------------------------------------------------\n");
    switch (escolha){
        case 1:
        printf("Na época de Carnaval, o preço do produto vai para R$%.2f",preco+(preco*10/100));
        break;
        case 2:
        printf("Na época de Férias Escolares, o preço do produto vai para R$%.2f",preco+(preco*20/100));
        break;
        case 3:
        printf("Na época de Dia da Crianças, o preço do produto vai para R$%.2f",preco+(preco*5/100));
        break;
        case 4:
        printf("Na época de Black Friday, o preço do produto vai para R$%.2f",preco-(preco*30/100));
        break;
        case 5:
        printf("Na época de Natal, o preço do produto vai para R$%.2f",preco-(preco*5/100));
        break;
        default:
        printf("Em épocas assim, mantenha o preço do produto R$%.2f",preco);
        break;
    }
    printf("\n--------------------------------------------------\n");   
}