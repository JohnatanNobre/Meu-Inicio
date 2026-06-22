#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome_1[20];
    char nome_2[20];
    char nome_3[20];
    char sexo_1;
    char sexo_2;
    char sexo_3;
    float nota_1;
    float nota_2;
    float nota_3;
    printf("Cadastrar a primeira pessoa:\n-----------------------------\n");
    printf("Qual é seu nome? ");
    fgets(nome_1,sizeof(nome_1),stdin);
    nome_1[strcspn(nome_1, "\n")] = '\0';
    fflush(stdin);
    printf("Qual é seu Sexo?(M/F) ");
    sexo_1= getchar();
    printf("Qual é a sua nota? ");
    scanf(" %f",&nota_1);
    printf("\nCadastrar a segunda pessoa:\n-----------------------------\n");
    while(getchar() != '\n');
    printf("Qual é seu nome? ");
    fgets(nome_2,sizeof(nome_2),stdin);
    nome_2[strcspn(nome_2, "\n")] = '\0';
    printf("Qual é seu Sexo?(M/F) ");
    sexo_2= getchar();
    printf("Qual é a sua nota? ");
    scanf("%f",&nota_2);
    printf("\nCadastrar a terceira pessoa:\n-----------------------------\n");
    while(getchar() != '\n');
    printf("Qual é seu nome? ");
    fgets(nome_3,sizeof(nome_3),stdin);
    nome_3[strcspn(nome_3, "\n")] = '\0';
    printf("Qual é seu Sexo?(M/F) ");
    sexo_3= getchar();
    printf("Qual é a sua nota? ");
    scanf("%f",&nota_3);
   
    printf("\n Listagem Completa\n-----------------------------\n");
    printf("NOME \t\t SEXO \t NOTA\n");
    printf("%s\t %c\t %.2f\n",nome_1,sexo_1,nota_1);
    printf("%s\t %c\t %.2f\n",nome_2,sexo_2,nota_2);
    printf("%s\t %c\t %.2f\n",nome_3,sexo_3,nota_3);
}