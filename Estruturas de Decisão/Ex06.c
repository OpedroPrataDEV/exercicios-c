#include<stdio.h>
int main(void){
    float peso,altura;
    printf("Informe sua Altura: ");
    scanf("%f",&altura);
    printf("Informe seu Peso: ");
    scanf("%f",&peso);
    float imc=peso/(altura*altura);
    if(imc<18.5){
        printf("Valor do IMC: %.2f\n",imc);
        printf("ABAIXO DO PESO");
    }else if((18.5<=imc)&&(imc<25)){
        printf("Valor do IMC: %.2f\n",imc);
        printf("PESO NORMAL");
    }else if((25<=imc)&&(imc<30)){
        printf("Valor do IMC: %.2f\n",imc);
        printf("SOBREPESO");
    }else if((30<=imc)&&(imc<35)){
        printf("Valor do IMC: %.2f\n",imc);
        printf("OBESIDADE GRAU 1");
    }else if((35<=imc)&&(imc<40)){
        printf("Valor do IMC: %.2f\n",imc);
        printf("OBESIDADE GRAU 2");
    }else if(imc>=40){
        printf("Valor do IMC: %.2f\n",imc);
        printf("OBESIDADE GRAU 3");
    }
    return 0;
}