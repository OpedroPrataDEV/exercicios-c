#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int matriz[5][7];
    int soma=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            matriz[i][j]=rand()%100;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            soma+=matriz[i][j];
        }
    }
    printf("Soma de todos os elementos da matriz: %d",soma);
}
