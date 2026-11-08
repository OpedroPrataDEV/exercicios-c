#include<stdio.h>
int main(void){
    int senha;
    printf("Informe a senha Numerica: ");
    scanf("%d",&senha);
    while(senha!=123456){
        printf("Senha Invalida, Tente novamente: ");
        scanf("%d",&senha);
    }
    printf("Acesso Permitido");
    return 0;
    
}