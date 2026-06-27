#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    int n,n2,n3;
    printf("Me diga três números e eu colocarei os dois em ordem crescente.\n");
    printf("Primeiro número: ");
    scanf("%d",&n);
    printf("Segundo número: ");
    scanf("%d",&n2);
    printf("Terceiro número: ");
    scanf("%d",&n3);
    if(n<n2&&n<n3){
        if(n3<n2){
        printf("Os número em ordem são %d,%d e %d\n",n,n3,n2);
        }else{
        printf("Os número em ordem são %d,%d e %d\n",n,n2,n3);
        }
    }else if (n2<n&&n2<n3){
        if(n<n3){
        printf("Os número em ordem são %d,%d e %d\n",n2,n,n3);
        }else{
        printf("Os número em ordem são %d,%d e %d\n",n2,n3,n);
        }
    }else{
        if(n<n2){
        printf("Os número em ordem são %d,%d e %d\n",n3,n,n2);
        }else{
        printf("Os número em ordem são %d,%d e %d\n",n3,n2,n);
        }
    }
   
}