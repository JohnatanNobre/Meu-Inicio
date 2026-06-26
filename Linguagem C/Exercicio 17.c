#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int nascimento;
    printf("Em que ano você nasceu? ");
    scanf("%d",nascimento);
    printf("Você tem %d anos.")
}