#include<stdio.h>
int main(void){

    char sexo;

    int qtd;

    int idade=0;

    int maior=0;

    int menor=99999;

    int vertentes=0;

    float salario=0;

    float totalSalario=0;

    float mediaSalario=0;

   

    printf("Informe a Qtd. de pessoas na pesquisa: ");

    scanf("%d",&qtd);

    for(int i=1;i<=qtd;i++){

        printf("Sexo (M/F): ");

        scanf(" %c",&sexo);

        printf("Idade: ");

        scanf("%d",&idade);

        if(idade>maior){

            maior=idade;

        }

        if(idade<menor){

            menor=idade;

        }

        printf("Salario: R$");

        scanf("%f",&salario);

        if(sexo=='F'||sexo=='f'){

            if(salario<=2000){

                vertentes+=1;

            }

        }

        totalSalario+=salario;



    }



    mediaSalario=totalSalario/qtd;

    printf("Media Salarial: %.2f\n",mediaSalario);

    printf("Maior Idade: %d\n",maior);

    printf("Menor Idade: %d\n",menor);

    printf("Inteseccionalidades: %d\n",vertentes);

    return 0;

   

}