#include<stdio.h>
int main(void){
    int num;
    printf("Informe o numero: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Numero Divisivel por 2\t");
    }
    if(num%3==0){
        printf("Numero Divisivel por 3\t");
    }
    if(num%6==0){
        printf("Numero Divisivel por 6");
    }
    return 0;
    
}