#include<Stdio.h>
int main(void){
    int cont=0;
    int num;
    for(int i=1;i<=5;i++){
        printf("Digite o numero: ");
        scanf("%d",&num);
        if(num%2==0){
            cont+=1;
        }
    }
    printf("%d Valores pares",cont);
}