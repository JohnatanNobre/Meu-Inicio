#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float num;
    printf("Digite um numero: ");
    scanf("%f",&num);
    int dobro=num*2;
    float terc=num/3;
    printf("Analisando o numero %.0f, seu dobro é %d e a terça parte é %.2f",num,dobro,terc);

}
