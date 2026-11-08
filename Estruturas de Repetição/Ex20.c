#include<stdio.h>
int main(void){
    float chico=1.5;
    float ze=1.1;
    int cont=0;
    while(ze<=chico){
        chico+=0.02;
        ze+=0.03;
        cont+=1;
    }
    printf("Levou %d Anos",cont);
    return 0;
}