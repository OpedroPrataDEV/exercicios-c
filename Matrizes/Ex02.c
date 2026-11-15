#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int matriz[5][10];
    int somalinhas[5]={0};
    int somacolunas[10]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            matriz[i][j]=rand()%100;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            somalinhas[i]+=matriz[i][j];
            
        }
    }
    for(int j=0;j<10;j++){
        for(int i=0;i<5;i++){
            somacolunas[j]+=matriz[i][j];
        }
    }
    printf("MATRIZ:\n");
    for(int i=0;i<5;i++){
        printf("\t");
        for(int j=0;j<10;j++){
            printf("[%d]",matriz[i][j]);
            
        }
        printf("\n");
    }
    printf("VETOR SOMA LINHAS: ");
    for(int i=0;i<5;i++){
        printf("[%d] ",somalinhas[i]);
    }
    printf("\n");
    printf("VETOR SOMA COLUNAS: ");
    for(int i=0;i<10;i++){
        printf("[%d] ",somacolunas[i]);
    }
    printf("\n");


    

}