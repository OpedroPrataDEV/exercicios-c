#include<stdio.h>
int main(void){
    float n1,n2,n3;
    char tipo;
    float media;
    printf("Digite a Primeira Nota: ");
    scanf("%f",&n1);
    printf("Digite a Segunda Nota: ");
    scanf("%f",&n2);
    printf("Digite a Terceira Nota ");
    scanf("%f",&n3);
    printf("Escolha o tipo de Media Aritmetica (a) ou Ponderada (p): ");
    scanf(" %c",&tipo);
    if ((tipo=='a')||(tipo=='A')){
        media=(n1+n2+n3)/3;
        printf("Media Aritmetica: %.2f",media);
    }else if((tipo=='p')||(tipo=='P')){
        media=((n1*3)+(n2*3)+(n3*4))/10;
        printf("Media Ponderada: %.2f",media);
    }
    return 0;
}