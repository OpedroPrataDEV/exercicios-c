#include<stdio.h>
int main(void){
    int num;
    printf("Informe o numero: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Numero DIVISIVEL POR 2 ");
         if(num%3==0){
            printf("E POR 3 ");
        }
         if(num%5==0){
            printf("E POR 5 ");
        }
    }else if(num%3==0){
        printf(" Numero  DIVISIVEL POR 3 ");
        if(num%5==0){
            printf("E POR 5");
        }
    }else if(num%5==0){
        printf("Numero DIVISIVEL POR 5");
    }
    else{
        printf("NUMERO NAO DIVISIVEL NEM POR 2, NEM POR 3, NEM POR 5");
    }
    return 0;
}