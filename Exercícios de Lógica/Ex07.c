#include<stdio.h>
int main(void){
    int total;
    printf("Informe a quantidade total de segundos: ");
    scanf("%d",&total);
    int horas=total/3600;
    int minutos=total%3600;
    int segundos=minutos%60;
    minutos=(total%3600)/60;
    printf("%d:%d:%d",horas,minutos,segundos);
}