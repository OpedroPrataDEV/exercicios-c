#include<stdio.h>
int main(void){
    int dia=45;
    int quantidade;
    float imposto=0.92;
    printf("Iforme a quantidade de dias trabalhados: ");
    scanf("%d",&quantidade);
    float total=(quantidade*dia)*imposto;
    printf("Total Liquido: R$%.2f",total);
}
