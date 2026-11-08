#include<stdio.h>
int main(void){
    long long unsigned num=1;
    for(int i=1;i<=63;i++){
        num=num*2;
    }
    printf("Resultado: %llu",num);
    return 0;
}