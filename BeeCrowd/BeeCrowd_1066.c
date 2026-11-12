#include<stdio.h>
int main(void){
    int num;
    int contpar=0;
    int contimpar=0;
    int contmais=0;
    int contmenos=0;
    for(int i=1;i<=5;i++){
        printf("Digite o Numero: ");
        scanf("%d",&num);
        if(num>0){
            contmais+=1;
        }
        if(num<0){
            contmenos+=1;
        }
        if(num%2==0){
            contpar+=1;
        }
        if(num%2!=0){
            contimpar+=1;
        }



    }
    printf("%d valor(es) par(es)\n",contpar);
    printf("%d valor(es) impar(es)\n",contimpar);
    printf("%d valor(es) positivo(s)\n",contmais);
    printf("%d valor(es) negativo(s)\n",contmenos);
}