#include<stdio.h>
int main(void){
    int x,y,z,maior,menor;
    printf("Primeiro Valor: ");
    scanf("%d",&x);
    printf("Segundo Valor: ");
    scanf("%d",&y);
    printf("Terceiro Valor: ");
    scanf("%d",&z);
    maior=x;
    menor=x;
    if(y>maior){
        maior=y;
    }
    if(z>maior){
        maior=z;
    }
    if(y<menor){
        menor=y;
    }
    if(z<menor){
        menor=z;
    }
    printf("Maior = %d\tMenor = %d",maior,menor);
    return 0;
}
