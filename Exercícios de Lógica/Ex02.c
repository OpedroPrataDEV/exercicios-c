#include<stdio.h>
int main(void){
    int x=5;
    int y=6;
    printf("Valor de X = %d\tValor de Y = %d\n",x,y);
    int auxiliar;
    auxiliar=x;
    x=y;
    y=auxiliar;
    printf("Valor de X = %d\tValor de Y = %d\n",x,y);
}