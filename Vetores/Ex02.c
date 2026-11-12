#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int vet[10];
    int vet2[10];
    int vetsoma[10];
    for(int i=0;i<10;i++){
        vet[i]=rand()%100;
    }
    for(int j=0;j<10;j++){
        vet2[j]=rand()%100;
    }
    for(int k=0;k<10;k++){
        vetsoma[k]=vet[k]+vet2[k];
    }
    printf("VETOR 1: ");
    for(int m=0;m<10;m++){
        printf("%d\t",vet[m]);
    }
    printf("\n");
    printf("VETOR 2: ");
    for(int n=0;n<10;n++){
        printf("%d\t",vet2[n]);
    }
    printf("\n");
    printf("VETOR SOMA: ");
    for(int o=0;o<10;o++){
        printf("%d\t",vetsoma[o]);
    }
    printf("\n");
}