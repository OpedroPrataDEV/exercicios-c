#include<stdio.h>
int main(void){
    int x;
    int y;
    int cont=0;
    int total=1;
    printf("Informe o Valor de X: ");
    scanf("%d",&x);
    printf("Informe o Valor de Y: ");
    scanf("%d",&y);
    
    do{
        printf("%d ",total);
        total+=1;
        cont+=1;
        if(cont%x==0){
            printf("\n");
        }
    }while(total<=y);

}