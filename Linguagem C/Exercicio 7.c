#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    float terc;
    printf("Digite um numero: ");
    scanf("%d",&num);
    int dobro=num*2;
    terc=(float)num/3;
    printf("Analisando o numero %d, seu dobro é %d e a terça parte é %.2f",num,dobro,terc);

}
