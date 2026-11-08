#include<stdio.h>
int main(void){
    float n1;
    float n2;
    float media;
    printf("Informe a Nota 1: ");
    scanf("%f",&n1);
    while(n1<0||n1>10){
        printf("Nota Invalida, Tente Novamente: ");
        scanf("%f",&n1);
    }
    printf("Informe a Nota 2: ");
    scanf("%f",&n2);
    while(n2<0||n2>10){
        printf("Nota Invalida, Tente Novamente: ");
        scanf("%f",&n2);
    }
    media=(n1+n2)/2;
    printf("Media Semestral: %.2f",media);
    return 0;
}