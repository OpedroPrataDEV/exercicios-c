#include <stdio.h>
int main(void){
    float l1,l2,l3;
    printf("Digite o Tamanho do Primeiro Lado: ");
    scanf("%f",&l1);
    printf("Digite o Tamanho do Segunda Lado: ");
    scanf("%f",&l2);
    printf("Digite o Tamanho do Terceiro Lado: ");
    scanf("%f",&l3);
    if(l1>=(l2+l3)||l2>=(l1+l3)||l3>=(l1+l2)){
        printf("NAO formam um Triangulo");
    }else if((l1==l2&&l1!=l3)||(l1==l3&&l1!=l2)||(l2==l3&&l2!=l1)){
        printf("Triangulo ISOSCELES");
    }else if((l1==l2)&&(l1==l3)){
        printf("Triangulo EQUILATERO");
    }else{
        printf("Triangulo ESCALENO");
    }
    return 0;
}