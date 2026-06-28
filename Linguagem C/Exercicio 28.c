#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int escolha;
    float peso;
    printf("========== Seu peso nos Planetas ==========\n");
    printf("Seu peso na terra (Kg): ");
    scanf("%f",&peso);
    printf("\n==================================\n");
    printf("\t ESCOLHA UM PLANETA\n");
    printf("==================================\n");
    printf("1\t Merúrio\n");
    printf("2\t Vênus\n");
    printf("3\t Marte\n");
    printf("4\t Júpter\n");
    printf("5\t Saturno\n");
    printf("6\t Urano\n");
    printf("\n==================================");
    printf("\nDigite sua opção => ");
    scanf("%d",&escolha);
    printf("\n--------------------------------------------------\n");
    switch (escolha){
        case 1:
        printf("No planteta MERCÚRIO, seu peso seria %.2f Kg",(peso*0.38));
        break;
        case 2:
        printf("No planteta VÊNUS, seu peso seria %.2f Kg",(peso*0.90));
        break;
        case 3:
        printf("No planteta MARTE, seu peso seria %.2f Kg",(peso*0.38));
        break;
        case 4:
        printf("No planteta JÚPTER, seu peso seria %.2f Kg",(peso*2.64));
        break;
        case 5:
        printf("No planteta SATURNO, seu peso seria %.2f Kg",(peso*1.08));
        break;
        case 6:
        printf("No planteta URANO, seu peso seria %.2f Kg",(peso*0.91));
        break;
        default:
        printf("Opção inválida, tente novamente!");
        break;
    }
    printf("\n--------------------------------------------------\n");   
    }