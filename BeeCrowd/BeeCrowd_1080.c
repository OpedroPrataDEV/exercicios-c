#include<stdio.h>
int main(void){
    int vet[100];
    int maior=vet[0];
    int pos;
    for(int i=0;i<100;i++){
        scanf("%d",&vet[i]);
        if(vet[i]>maior){
            maior=vet[i];
            pos=i+1;
        }
    }
    printf("%d\n",maior);
    printf("%d\n",pos);
    return 0;



}