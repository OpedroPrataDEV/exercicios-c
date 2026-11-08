#include<stdio.h>
int main(void){
    int num;
    printf("Informe o Numero: ");
    scanf("%d",&num);
    for(int i=2;i<=num;i+=2){
        printf("Quadrado de %d = %d\n",i,(i*i));
    }
    return 0;
}