#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    int ant=num-1,suc=num+1;
    printf("Analisando o numero %d, seu antecessor é %d e seu sucessor é %d",num,ant,suc);


    
}