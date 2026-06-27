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
    if(idade>18){
        printf("Seu alistamento foi em %d. Já se passaram %d anos.",(nascimento+18),(idade-18));
    } else if(idade<18){
        printf("Seu alistamento séra em %d,ainda faltam %d anos.",(nascimento+18),(18-idade));
    }else{
        printf("Voce completa 18 anos exatamente em %d.Vá se alistar.",y);
    }
}