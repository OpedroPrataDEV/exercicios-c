#include<stdio.h>
int main(void){
    int a,b,c,d,e;
    int contmais=0;
    int contmenos=0;
    printf("Primeiro Numero: ");
    scanf("%d",&a);
    printf("Segundo Numero: ");
    scanf("%d",&b);
    printf("Terceiro Numero: ");
    scanf("%d",&c);
    printf("Quarto Numero: ");
    scanf("%d",&d);
    printf("Quinto Numero: ");
    scanf("%d",&e);
    if (a>=0){
        contmais++;
    }
    else{
        contmenos+=1;
    }
     if (b>=0){
        contmais+=1;
    }
    else{
        contmenos+=1;
    }
     if (c>=0){
        contmais+=1;
    }
    else{
        contmenos+=1;
    }
     if (d>=0){
        contmais+=1;
    }
    else{
        contmenos+=1;
    }
     if (e>=0){
        contmais+=1;
    }
    else{
        contmenos+=1;
    }
    printf("Qtd. De numeros Positivos: %d\n",contmais);
    printf("Qtd. De numeros Negativos: %d",contmenos);
    return 0;

}