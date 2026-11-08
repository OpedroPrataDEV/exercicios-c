#include<stdio.h>
int main(void){
    char vogal;
    printf("Digite sua Letra: ");
    scanf("%c",&vogal);
    if(vogal=='a' || vogal=='A' || vogal=='e'|| vogal=='E'||vogal=='i'||vogal=='I'||vogal=='o'||vogal=='O'||vogal=='u'||vogal=='U'){
        printf("Sua letra e uma VOGAL");
    }
    else{
        printf("Sua letra e uma CONSOANTE");
    }
    return 0;


}