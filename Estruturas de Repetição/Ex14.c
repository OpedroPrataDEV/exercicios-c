#include<Stdio.h>
int main(void){
    int num1,num2;
    int resultado=0;
    printf("Digite os Numeros que serao Multiplicados: ");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num2;i++){
        resultado=resultado+num1;
    }
    printf("Resultado = %d",resultado);
    return 0;

    
}
