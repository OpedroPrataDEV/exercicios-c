#include<stdio.h>
int main(void){
    int num;
    printf("Informe o valor: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}