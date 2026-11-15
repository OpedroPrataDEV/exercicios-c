#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int mat[7][7];
    for(int i=0;i<7;i++){
        for(int j=0;j<7;j++){
            mat[i][j]=rand()%100;
        }
    }
    printf("MATRIZ COMPLETA:\n");
    for(int i=0;i<7;i++){
        printf("\t");
        for(int j=0;j<7;j++){
            if(j==6-i){
                printf("[%d]",mat[i][j]);
            }
            else{
                printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }
}