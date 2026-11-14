#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    int aux;
    srand(time(NULL));
    int vet[5];
    for(int i=0;i<5;i++){
        vet[i]=rand()%100;
    }
    printf("Vetor antes da Ordenacao: ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
        if(vet[i]>vet[i+1]){
            aux=vet[i];
            vet[i]=vet[i+1];
            vet[i+1]=aux;
        }
    }
    }
    
    printf("Vetor Ordenado: ");
    for(int i=0;i<5;i++){
        printf("%d ",vet[i]);
    }
    printf("\n");

}