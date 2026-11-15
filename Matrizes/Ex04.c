#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int mat[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i][j]=rand()%100;
        }
    }
    printf("MATRIZ COMPLETA:\n");
    for(int i=0;i<5;i++){
        printf("\t");
        for(int j=0;j<5;j++){
            if(i==j){
                printf("[%d]",mat[i][j]);
            }
            else{
                printf("%d ",mat[i][j]);
            }
        }
        printf("\n");
    }

}