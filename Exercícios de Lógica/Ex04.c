#include<stdio.h>
int main(void){
    int quantidade;
    float consumo;
    float gorjeta=1.1;
    float total;
    float divisao;
    printf("Valor da consumacao: R$");
    scanf("%f",&consumo);
    printf("Quantidade de pessoas: ");
    scanf("%d",&quantidade);
    total=consumo*gorjeta;
    printf("Valor total do consumo + Taxa de Gorjeta (10%%): R$%.2f\n",total);
    divisao=total/quantidade;
    printf("Total dividido para %d pessoas: R$%.2f",quantidade,divisao);
    return 0;

    
}