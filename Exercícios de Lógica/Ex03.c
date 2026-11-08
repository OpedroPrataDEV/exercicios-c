#include<stdio.h>
int main(void){
    int x,y;
    x=10;
    y=9;
    printf("Valor de X = %d\tValor de Y = %d\n",x,y);
    y=x+y;
    x=y-x;
    y=y-x;
    printf("Valor de X = %d\tValor de Y = %d",x,y);
    return 0;
}