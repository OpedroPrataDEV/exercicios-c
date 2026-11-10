#include<stdio.h>
int main(void){
     
    int cont=0;
    float num;
    float total=0;
    float media;
    
    for(int i=1;i<=6;i++){
        scanf("%f",&num);
        if(num>0){
            cont+=1;
            total+=num;
        }
    }
    media=total/cont;
    printf("%d valores positivos\n",cont);
    printf("Media: %.1f\n",media);
    return 0;
    
}