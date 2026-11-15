#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int mat[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            mat[i][j]=rand()%100;
        }
    }
    printf("MATRIZ ORIGINAL:\n");
    for(int i=0;i<4;i++){
        printf("\t");
        for(int j=0;j<4;j++){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }
    printf("ELEMENTOS ABAIXO DA DIAGONAL SECUNDARIA:\n");
    for(int i=1;i<4;i++){
        printf("\t");
        for(int j=3;i+j>=4;j--){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }
}