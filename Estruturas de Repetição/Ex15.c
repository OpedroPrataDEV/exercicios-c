#include<stdio.h>
int main(void){
    int cont;
    int num=1;
    do{
        cont=0;
        for(int i=1;i<=10;i++){
            if(num%i==0){
                cont+=1;
            }
        }
        if(cont==10){
            printf("ENCONTRADO! %d",num);
            break;
        }else{
            num++;
        }
    }while(cont!=10);
}