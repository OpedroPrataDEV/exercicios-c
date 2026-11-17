#include<stdio.h>
int main(void){
    int num;
    int cont=0;
    scanf("%d",&num);
    do{
        if(num%2!=0){
            cont+=1;
            printf("%d\n",num);
        }
        num+=1;
    }while(cont<6);
    return 0;
}