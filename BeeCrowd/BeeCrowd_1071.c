#include<stdio.h>
int main(void){
    int x;
    int y;
    int maior;
    int menor;
    int soma=0;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        for(int i=y+1;i<x;i++){
            if(i%2!=0){
                soma+=i;
            }
        }
    }
    if(y>x){
        for(int i=x+1;i<y;i++){
            if(i%2!=0){
                soma+=i;
            }
        }
    }
    printf("%d",soma);
    
}