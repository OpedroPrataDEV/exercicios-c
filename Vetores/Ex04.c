#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    int qtd[5];
    int valores[5];
    int faturamento=0;
    float comissao;
    int maior=0;
    srand(time(NULL));
    for(int i=0;i<5;i++){
        qtd[i]=(rand()%10)+1;
    }
    for(int j=0;j<5;j++){
        valores[j]=(rand()%10)+1;
    }
    printf("Valor de cada produto: ");
    for(int q=0;q<5;q++){
        printf("\tR$%d\t",valores[q]);
    }
    printf("\n");
    printf("Qtd. de cada item: ");
    for(int w=0;w<5;w++){
        printf("\t%d\t",qtd[w]);
    }
    printf("\n");
    printf("Faturamento do mes: ");
    for(int e=0;e<5;e++){
        faturamento+=valores[e]*qtd[e];
    }
    printf("\tR$ %d\n",faturamento);
    comissao=faturamento*0.05;
    printf("Comissao: R$%.2f",comissao);
    for(int r=0;r<5;r++){
        if(valores[r]>maior){
            maior=valores[r];
        }
    }
    for(int t=0;t<5;t++){
        if(valores[t]==maior){
            printf("\nObjeto mais valioso na posicao %d, valor = R$%d",t+1,valores[t]);
        }
    }
    
    
    

}