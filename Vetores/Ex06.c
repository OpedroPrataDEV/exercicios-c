#include<stdio.h>
int main(void){
    int escolha;
    float vet[10];
    for(int i=0;i<10;i++){
        printf("Informe o numero: ");
        scanf("%f",&vet[i]);
        }
    do{
        printf("Faca sua escolha:\n \t0 - FINALIZA O PROGRAMA\n\t1 - IMPRIMIR O VETOR\n\t2 - IMPRIMIR VETOR NA ORDEM INVERSA: ");
        scanf("%d",&escolha);
        if(escolha==1){
            printf("Vetor Completo: ");
            for(int i=0;i<10;i++){
                printf("%.2f ",vet[i]);
            }
            printf("\n");
        }else if(escolha==2){
            printf("Vetor Inverso: ");
            for(int i=0;i<10;i++){
                printf("%.2f ",vet[9-i]);
            }
            printf("\n");
                
            
        }
    }while(escolha!=0);
    
}