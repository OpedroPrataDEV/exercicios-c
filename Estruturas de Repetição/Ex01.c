#include<stdio.h>
int main(void){
    int num;
    printf("Deseja ver a tabuada de qual numero? ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        printf("\t%d X %d = %d\n",num,i,(num*i));
    }
    return 0;
}