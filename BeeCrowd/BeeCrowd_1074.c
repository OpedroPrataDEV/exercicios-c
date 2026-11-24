#include<stdio.h>
int main(void){
    int num;
    int atual;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        scanf("%d",&atual);
        if(atual%2==0){
            if(atual==0){
                printf("NULL\n");
            }
            else if(atual>0){
                printf("EVEN POSITIVE\n");
            }
            else if(atual<0){
                printf("EVEN NEGATIVE\n");
            }
        }else{
            if(atual>0){
                printf("ODD POSITIVE\n");
            }
            else if(atual<0){
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}