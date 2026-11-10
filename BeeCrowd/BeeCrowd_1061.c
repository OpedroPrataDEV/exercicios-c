#include <stdio.h>

int main(void) {
    int dia0, hora0, minutos0, segundos0;
    int dia1, hora1, minutos1, segundos1;
    
    int segundototal0, segundototal1;
    int dias, horas, minutos, segundos;

    scanf("Dia %d", &dia0);
    scanf("%d : %d : %d", &hora0, &minutos0, &segundos0);
    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d", &hora1, &minutos1, &segundos1);

    segundototal0 = (dia0 * 86400) + (hora0 * 3600) + (minutos0 * 60) + segundos0;
    segundototal1 = (dia1 * 86400) + (hora1 * 3600) + (minutos1 * 60) + segundos1;

    segundos = segundototal1 - segundototal0;

    dias = segundos / 86400;
    segundos = segundos % 86400;

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}