/* Calcule a velocidade média de um veículo, fornecidos a distância percorrida em “km” e 
o tempo do percurso em “horas”. */
#include <stdio.h>
int main()
{
    int km,horas,valor;
    printf("quantos km percorreu?");
    scanf("%d", &km);
    printf ("quantas horas demorou?");
    scanf("%d", &horas);
    valor = km/horas;
    printf("%d km/h em média", valor);
    return 0;
}
