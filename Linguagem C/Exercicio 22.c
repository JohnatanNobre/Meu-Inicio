#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data=localtime(&t);
    int h = data ->tm_hour,hfilme;
    float dinheiro;
    printf("========== MEU CINEMA ==========\n");
    printf("HORARIO ATUAL: %dh - PREÇO DO INGRESSO: R$20\n",h);
    printf("--------------------------------------\n");
    printf("Quanto dinheiro você tem? R$ ");
    scanf("%f",&dinheiro);
    printf("Qual o horario do filme? ");
    scanf("%d",&hfilme);

    if(dinheiro>=20 && h<hfilme){
        printf("Você consegue comprar o ingresso\n");
    }else{
        if(dinheiro<20){
            printf("Infelizmente não é possivel comprar o ingresso, pois você não tem dinheiro suficiente!\n");
        }else{
            printf("Infelizmente não é possivel comprar o ingresso, pois ja passou do horario de inicio do filme!\n");
        }
    }
}
