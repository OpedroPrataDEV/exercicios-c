#include<stdio.h>
int main(void){
    for(int i=1;i<=20;i+=2){
        for(int j=i+6;j<=i+6;j=(j-2)+4){
            printf("I = %d\t J = %d\n",i,j);
            printf("I = %d\t J = %d\n",i,(j-1));
            printf("I = %d\t J = %d\n",i,(j-2));
            
        }
           
            
    }
    return 0;
}