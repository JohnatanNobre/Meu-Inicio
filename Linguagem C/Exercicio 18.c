#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data=localtime(&t);
    int y = data ->tm_year+1900;
    setlocale(LC_ALL,"Portuguese");
    int nascimento,idade;
    printf("Em que ano você nasceu? ");
    scanf("%d",&nascimento);
    idade=y-nascimento;
    printf("Sua idade atual é de  %d anos.\n",idade);
    if(idade>=18){
        printf("Ja fez 18 anos. Espero sinceramente que você tenha se alistado.");
    } else{
        printf("Você ainda não tem 18 anos. Aida não pode se alistar.");
    }
}