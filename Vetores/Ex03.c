#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int vet[6]; 
    int vet2[6];
    for(int i=0;i<6;i++){
        vet[i]=rand()%10;

    }
    printf("VETOR ORIGINAL: ");
    for(int m=0;m<6;m++){
        printf("%d\t",vet[m]);
    }
    printf("\n");
    for(int j=0;j<6;j++){
        vet2[5-j]=vet[j];
    }
    printf("VETOR INVERTIDO: ");
    for(int k=0;k<6;k++){
        printf("%d\t",vet2[k]);
    }
}