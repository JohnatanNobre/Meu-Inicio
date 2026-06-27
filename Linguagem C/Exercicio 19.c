#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int ano;
    printf("Digite um ano qualquer: ");
    scanf("%d",&ano);
    if(ano%100==0){
        if(ano%400==0){
        printf("O ano %d … BISSEXTO.",ano);
    } else{
        printf("O ano %d N„O … BISSEXTO.",ano);
    }
    }else{if(ano%4==0){
        printf("O ano %d … BISSEXTO.",ano);
    } else{
        printf("O ano %d N„O … BISSEXTO.",ano);
    }
    }
}