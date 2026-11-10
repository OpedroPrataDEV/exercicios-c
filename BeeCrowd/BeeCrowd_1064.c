#include<stdio.h>
int main(void){
     
    int cont=0;
    float num;
    float total=0;
    float media;
    
    for(int i=1;i<=6;i++){
        printf("Informe um numero: ");
        scanf("%f",&num);
        if(num>0){
            cont+=1;
            total+=num;
        }
    }
    media=total/cont;
    printf("%d Valores positivos\n",cont);
    printf("Media: %.1f",media);
    return 0;
    
}