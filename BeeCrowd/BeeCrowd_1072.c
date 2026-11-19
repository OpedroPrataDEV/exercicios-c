#include<stdio.h>
int main(void){
    int in=0;
    int out=0;
    int qtd;
    int num;
    scanf("%d",&qtd);
    for(int i=1;i<=qtd;i++){
        scanf("%d",&num);
        if(num>=10&&num<=20){
            in+=1;
        }
        else{
            out+=1;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}