#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[20];
    float n1,n2;
    printf("Digite o nome do aluno: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome, "\n")] = '\0'; 
    printf("Nota 1: ");
    scanf("%f",&n1);
    printf("Nota 2: ");
    scanf("%f",&n2);
    float media=(n1+n2)/2;
    printf("O aluno %s tirou notas %.2f r %.2f e ficou com média %.2f",nome,n1,n2,media);
}

