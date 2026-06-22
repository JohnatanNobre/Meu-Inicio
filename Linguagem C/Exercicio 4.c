#include <stdio.h>
#include <locale.h>

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
    fflush(stdin);
    printf("Qual é seu nome? ");
    gets(nome_1);
    printf("Qual é seu Sexo?(M/F) ");
    sexo_1= getchar();
    printf("Qual é a sua nota? ");
    scanf("%f",&nota_1);
    printf("Cadastrar a segunda pessoa:\n-----------------------------\n");
    fflush(stdin);
    printf("Qual é seu nome? ");
    gets(nome_2);
    printf("Qual é seu Sexo?(M/F) ");
    sexo_2= getchar();
    printf("Qual é a sua nota? ");
    scanf("%f",&nota_2);
    printf("Cadastrar a terceira pessoa:\n-----------------------------\n");
    fflush(stdin);
    printf("Qual é seu nome? ");
    gets(nome_3);
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