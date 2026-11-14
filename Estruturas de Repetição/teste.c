#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int num=rand()%100;
    int tentativa;
    int cont=0;
    do{
        printf("Tente adivinhar o numero: ");
        scanf("%d",&tentativa);
        if(tentativa>num){
            printf("MAIS BAIXO!\n");
            cont+=1;
        }else if(tentativa<num){
            printf("MAIS ALTO!\n");
            cont+=1;
        }
    }while(tentativa!=num);
    printf("PARABENS VOCE ACERTOU O NUMERO %d em %d TENTATIVAS",num,cont);
    
}