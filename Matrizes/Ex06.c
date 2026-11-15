#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int mat[5][4];
    int mattrans[4][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            mat[i][j]=rand()%100;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            mattrans[i][j]=mat[j][i];
        }
    }
    printf("MATRIZ ORIGINAL:\n");
    for(int i=0;i<5;i++){
        printf("\t");
        for(int j=0;j<4;j++){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ TRANSPOSTA:\n");
    for(int i=0;i<4;i++){
        printf("\t");
        for(int j=0;j<5;j++){
            printf("[%d]",mattrans[i][j]);
        }
        printf("\n");
    }
    

}