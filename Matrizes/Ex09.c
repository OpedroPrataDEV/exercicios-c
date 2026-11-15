#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    srand(time(NULL));
    int mat[4][4];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,l=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            mat[i][j]=rand()%100;
        }
    }
    for(int j=0;j<4;j++){
        int i=0;
        a+=mat[i][j];
    }
    for(int j=0;j<4;j++){
        int i=1;
        b+=mat[i][j];
    }
    for(int j=0;j<4;j++){
        int i=2;
        c+=mat[i][j];
    }
    for(int j=0;j<4;j++){
        int i=3;
        d+=mat[i][j];
    }
    for(int i=0;i<4;i++){
        int j=0;
        e+=mat[i][j];
    }
    for(int i=0;i<4;i++){
        int j=1;
        f+=mat[i][j];
    }
    for(int i=0;i<4;i++){
        int j=2;
        g+=mat[i][j];
    }
    for(int i=0;i<4;i++){
        int j=3;
        h+=mat[i][j];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==j){
                k+=mat[i][j];
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j==3-i){
                l+=mat[i][j];
            }
        }
    }
    printf("MATRIZ:\n");
    for(int i=0;i<4;i++){
        printf("\t");
        for(int j=0;j<4;j++){
            printf("[%d]",mat[i][j]);
        }
        printf("\n");
    }
    if(a==b&&b==c&&c==d&&d==e&&e==f&&f==g&&g==h&&h==k&&k==l){
        printf("MATRIZ QUADRADO MAGICO");
    }
    else{
        printf("Matiz comum");
    }


    

}