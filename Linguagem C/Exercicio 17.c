#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void main() {
    time_t t;
    time(&t);
    struct tm *data;
    data=localtime(&t);
    int y = data ->tm_year+1900,idade;
    setlocale(LC_ALL,"Portuguese");
    int nascimento;
    printf("Em que ano você nasceu? ");
    scanf("%d",&nascimento);
    idade=y-nascimento;
    printf("Você tem %d anos.",idade);
    if(idade>=65){
        printf("\n===  ATENÇÃO!! DIRIJA-SE AO CAIXA PREFERENCIAL.  ===\n");
    }
}