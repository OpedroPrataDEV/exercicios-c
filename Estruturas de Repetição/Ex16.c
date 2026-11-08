#include<stdio.h>
int main(void){
    int contpos=0;
    int contmen=0;
    int num;
    do{
        printf("Digite um numero Inteiro: ");
        scanf("%d",&num);
        if(num>0){
            contpos+=1;
        }
        else if(num<0){
            contmen+=1;
        }
    }while(num!=0);
    printf("Numeros Positivos: %d\n",contpos);
    printf("Numeros Negativos: %d\n",contmen);
    return 0;
}