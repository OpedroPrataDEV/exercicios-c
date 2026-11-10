#include<stdio.h>
int main(void){
    float nota1;
    float nota2;
    float media;
    int escolha;
    do{
        printf("Digite a primeira nota: ");
        scanf("%f",&nota1);
        while(nota1<0||nota1>10){
            printf("Valor invalido tente novamente: ");
            scanf("%f",&nota1);
        }
        printf("Digite a segunda nota: ");
        scanf("%f",&nota2);
        while(nota2<0||nota2>10){
            printf("Valor invalido tente novamente: ");
            scanf("%f",&nota2);
        }
        media=(nota1+nota2)/2;
        printf("Media = %.2f\n",media);
        printf("Deseja fazer novo calculo? (1- Sim/ 2- Nao): ");
        scanf("%d",&escolha);
    }while(escolha!=2);

    

}