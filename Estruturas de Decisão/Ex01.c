#include<stdio.h>
int main(void){
    int x,y,z,maior,menor;
    printf("Primeiro Valor: ");
    scanf("%d",&x);
    printf("Segundo Valor: ");
    scanf("%d",&y);
    printf("Terceiro Valor: ");
    scanf("%d",&z);
    if((x==y)&&(y==z)){
        menor=x;
        maior=x;
    }
    else if((x>y)&&(x>z)){
        maior=x;
    }
    else if((z>x)&&(z>y)){
        maior=z;
    }
    else if((y>z)&&(y>x)){
        maior=y;
    }
    if((x<z)&&(x<y)){
        menor=x;
    }
    else if((y<z)&&(y<x)){
        menor=y;
    }
    else if((z<x)&&(z<y)){
        menor=z;
    }
    printf("Maior = %d\tMenor = %d",maior,menor);
    return 0;
}