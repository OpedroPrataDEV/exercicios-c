#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2==0){
            printf("%d^%d = %d\n",i,2,i*i);
        }
    }
    return 0;
}