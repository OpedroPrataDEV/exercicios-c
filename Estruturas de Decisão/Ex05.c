#include<stdio.h>
int main(void){
    int escolha;
    float valor;
    printf("Digite o valor em R$ ou $: ");
    scanf("%f",&valor);
    printf("Voce deseja ver o valor em REAIS(1) ou DOLARES(2): ");
    scanf("%d",&escolha);
    if(escolha==1){
        valor=valor*5.3;
        printf("Valor em REAIS: R$%.2f",valor);
    }else{
        valor=valor/5.3;
        printf("Valor em DOLARES: $%.2f",valor);
    }
    return 0;
}