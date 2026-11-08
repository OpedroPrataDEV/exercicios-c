#include<stdio.h>
int main(void){
    int x;
    int y;
    do{
        printf("Digite as Coordenadas X e Y: ");
        scanf("%d %d",&x,&y);
        if(x>0&&y>0){
            printf("Primeiro Quadrante\n");
        }
        else if(x>0&&y<0){
            printf("Quarto Quadrante\n");
        }
        else if(x<0&&y>0){
            printf("Segundo Quadrante\n");
        }
        else if(x<0&&y<0){
            printf("Terceiro Quadrante\n");
        }
    }while(x*y!=0);
    return 0;
}
