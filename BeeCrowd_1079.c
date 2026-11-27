#include<stdio.h>
int main(void){
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        float n1;
        float n2;
        float n3;
        scanf("%f %f %f",&n1,&n2,&n3);
        float media=((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1f\n",media);
    }
    return 0;
}