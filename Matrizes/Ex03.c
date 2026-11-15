#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat1[i][j]=rand()%100;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat2[i][j]=rand()%100;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    printf("MATRIZ 1:\n");
    for(int i=0;i<3;i++){
        printf("\t");
        for(int j=0;j<3;j++){
            printf("[%d]",mat1[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ 2:\n");
    for(int i=0;i<3;i++){
        printf("\t");
        for(int j=0;j<3;j++){
            printf("[%d]",mat2[i][j]);
        }
        printf("\n");
    }
    printf("MATRIZ SOMA:\n");
    for(int i=0;i<3;i++){
        printf("\t");
        for(int j=0;j<3;j++){
            printf("[%d]",mat3[i][j]);
        }
        printf("\n");
    }

}