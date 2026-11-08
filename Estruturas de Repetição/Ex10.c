#include<stdio.h>
int main(void){
    float saldo=0;
    float dia_atual=0.01;
    for(int i=1;i<=30;i++){
        saldo=saldo+dia_atual;
        dia_atual=dia_atual*2;
    }
    printf("Saldo Final R$%.2f",saldo);
    return 0;
}