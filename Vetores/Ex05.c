#include<stdio.h>
int main(void){
    float meses[12];
    float maior=0;
    float menor=99999;
    int mesma;
    int mesme;
    for(int i=0;i<12;i++){
        printf("Digite a temperatura media do mes %d: ",i+1);
        scanf("%f",&meses[i]);
        if(meses[i]>maior){
            maior=meses[i];
            mesma=i;
        }
        if(meses[i]<menor){
            menor=meses[i];
            mesme=i;
        }
    }
    if(mesma==0){
        printf("A maior temperatura foi %.2f, no mes de Janeiro\n ",maior);
    }else if(mesma==1){
        printf("A maior temperatura foi %.2f, no mes de Fevereiro\n",maior);
    }else if(mesma==2){
        printf("A maior temperatura foi %.2f, no mes de Marco\n",maior);
    }else if(mesma==3){
        printf("A maior temperatura foi %.2f, no mes de Abril\n",maior);
    }else if(mesma==4){
        printf("A maior temperatura foi %.2f, no mes de Maio\n",maior);
    }else if(mesma==5){
        printf("A maior temperatura foi %.2f, no mes de Junho\n",maior);
    }else if(mesma==6){
        printf("A maior temperatura foi %.2f, no mes de Julho\n",maior);
    }else if(mesma==7){
        printf("A maior temperatura foi %.2f, no mes de Agosto\n",maior);
    }else if(mesma==8){
        printf("A maior temperatura foi %.2f, no mes de Setembro\n",maior);
    }else if(mesma==9){
        printf("A maior temperatura foi %.2f, no mes de Outubro\n",maior);
    }else if(mesma==10){
        printf("A maior temperatura foi %.2f, no mes de Novembro\n",maior);
    }else if(mesma==11){
        printf("A maior temperatura foi %.2f, no mes de Dezembro\n",maior);
    }
    if(mesme==0){
        printf("A menor temperatura foi %.2f, no mes de Janeiro \n",menor);
    }else if(mesme==1){
        printf("A menor temperatura foi %.2f, no mes de Fevereiro\n",menor);
    }else if(mesme==2){
        printf("A menor temperatura foi %.2f, no mes de Marco\n",menor);
    }else if(mesme==3){
        printf("A menor temperatura foi %.2f, no mes de Abril\n",menor);
    }else if(mesme==4){
        printf("A menor temperatura foi %.2f, no mes de Maio\n",menor);
    }else if(mesme==5){
        printf("A menor temperatura foi %.2f, no mes de Junho\n",menor);
    }else if(mesme==6){
        printf("A menor temperatura foi %.2f, no mes de Julho\n",menor);
    }else if(mesme==7){
        printf("A menor temperatura foi %.2f, no mes de Agosto\n",menor);
    }else if(mesme==8){
        printf("A menor temperatura foi %.2f, no mes de Setembro\n",menor);
    }else if(mesme==9){
        printf("A menor temperatura foi %.2f, no mes de Outubro\n",menor);
    }else if(mesme==10){
        printf("A menor temperatura foi %.2f, no mes de Novembro\n",menor);
    }else if(mesme==11){
        printf("A menor temperatura foi %.2f, no mes de Dezembro\n",menor);
    }
}