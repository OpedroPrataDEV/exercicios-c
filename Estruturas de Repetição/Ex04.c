#include<stdio.h>
int main(void){
    int num=0;
    for(int i=1;i<=1000;i+=2)
        if(i%2!=0){
            num=num+i;
        }
    printf("Resultado = %d",num);

}