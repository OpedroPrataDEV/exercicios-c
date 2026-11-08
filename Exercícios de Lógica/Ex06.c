#include<stdio.h>
int main(void){
    float taxa=5.3;
    float reais;
    printf("Digite o valor em Reais: R$");
    scanf("%f",&reais);
    float total=reais/taxa;
    printf("Esse valor em Dolares vale: U$%.2f",total);
    return 0;
}