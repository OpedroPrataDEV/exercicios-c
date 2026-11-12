#include<stdio.h>
int main(void){
    int vetor[10];
    int vetor2[10];
    for(int i=0;i<10;i++){
        printf("Digite o numero da posicao %d: ",i+1);
        scanf("%d",&vetor[i]);
        vetor2[i]=vetor[i]*vetor[i];
    }
    printf("Vetor Original: ");
    for(int j=0;j<10;j++){
        printf("%d\t",vetor[j]);
    }
    printf("\nVetor Quadrado: ");
    for(int k=0;k<10;k++){
        printf("%d\t",vetor2[k]);
    }
    
}