#include<stdio.h>
int main(void){
    int num;
    int ehprimo=1;
    printf("Digite o numero desejado: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            ehprimo=0;
            break;
        } 
    }
    if(ehprimo){
        printf("O Numero %d EH PRIMO",num);

    }
    else{
        printf("O Numero %d NAO EH PRIMO",num);
    }
    return 0;
}