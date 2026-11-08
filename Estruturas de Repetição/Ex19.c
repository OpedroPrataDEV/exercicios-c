#include<stdio.h>
int main(void){
    long long unsigned num=1;
    long long unsigned total=0;
    for(int i=1;i<=64;i++){
        total=total+num;
        num=num*2;
    }
    printf("Resultado: %llu",total);
    return 0;
}
