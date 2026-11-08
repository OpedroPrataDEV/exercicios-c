#include<stdio.h>
int main(void){
    int num;
    printf("Informe o numero: ");
    scanf("%d",&num);
    if(num==1){
        printf("JANEIRO");
    }
    else if(num==2){
        printf("FEVEREIRO");
    }
    else if(num==3){
        printf("MARCO");
    }
    else if(num==4){
        printf("ABRIL");
    }
    else if(num==5){
        printf("MAIO");
    }
    else if(num==6){
        printf("JUNHO");
    }
    else if(num==7){
        printf("JULHO");
    }
    else if(num==8){
        printf("AGOSTO");
    }
    else if(num==9){
        printf("SETEMBRO");
    }
    else if(num==10){
        printf("OUTUBRO");
    }
    else if(num==11){
        printf("NOVEMBRO");
    }
    else if(num==12){
        printf("DEZEMBRO");
    }
    else{
        printf("MES INVALIDO");
    }
    return 0;
}