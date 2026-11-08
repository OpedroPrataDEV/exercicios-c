#include<stdio.h>
int main(void){
    float massa;
    float final;
    int cont=0;
    int total;
    printf("Informe a massa inicial do material (gramas): ");
    scanf("%f",&massa);
    while(massa>0.05){
        massa=massa/2;
        cont=cont+1;
    }
    total=cont*50;
    printf("O total de segundos foi %d",total);
    return 0;


}