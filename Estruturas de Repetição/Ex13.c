#include<stdio.h>
int main(void){
    int workers;
    float salario,media;
    float total=0;
    float maior=0;
    float menor=9999999;
    printf("Digite a quantidade de Funcionarios da Empresa (Max 5): ");
    scanf("%d",&workers);
    for(int i=1;i<=workers;i++){
        printf("Digite o Salario R$");
        scanf("%f",&salario);
        total+=salario;
        if(salario<menor){
            menor=salario;
        }
        if(salario>maior){
            maior=salario;
        }
    }
    media=total/workers;
    printf("Total de Funcionarios: %d\n",workers);
    printf("Media de salario R$%.2f\n",media);
    printf("Maior Salario: R$%.2f\n",maior);
    printf("Menor Salario: R$%.2f\n",menor);
}