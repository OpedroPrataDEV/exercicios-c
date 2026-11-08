#include<stdio.h>
int main(void){
    int opcao;
    float n1;
    float n2;
    float resultado;
    do{
        printf("\n\tDIGITE A OPERACAO DESEJADA\n\t1-SOMAR\n\t2-SUBTRAIR\n\t3-MULTIPLICAR\n\t4-DIVIDIR\n\t0-SAIR\n");
    scanf("%d",&opcao);
    if(opcao==1){
        printf("Digite os numeros para a soma: ");
        scanf("%f %f",&n1,&n2);
        resultado=n1+n2;
        printf("Resultado = %.2f",resultado);
    }else if(opcao==2){
        printf("Digite os numeros para a subtracao: ");
        scanf("%f %f",&n1,&n2);
        resultado=n1-n2;
        printf("Resultado = %.2f",resultado);
    }else if(opcao==3){
        printf("Digite os numeros para a multiplicacao: ");
        scanf("%f %f",&n1,&n2);
        resultado=n1*n2;
        printf("Resultado = %.2f",resultado);
    }else if(opcao==4){
        printf("Digite os numeros para a divisao: ");
        scanf("%f %f",&n1,&n2);
        resultado=n1/n2;
        printf("Resultado = %.2f\n",resultado);
    }
    
    }while(opcao!=0);
    return 0;
    
}