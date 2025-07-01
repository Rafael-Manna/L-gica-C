/*
3 personagens
escolher 2 dos 3 
força 10 - 30
golpe 80 - 100
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main() {
     char jn[5];
    do{
      srand(time(NULL));
    // Inicializa o gerador de números aleatórios com base no tempo atual
    char p1[10] = "Judas";
     int golpe1 = (rand() % 20) + 80;
    int forca1 = (rand() % 30) + 10;
    char p2[10] ="Azazel";
     int golpe2 = (rand() % 20) + 80;
    int forca2 = (rand() % 30) + 10;
    char p3[10] = "Isaac";
     int golpe3 = (rand() % 20) + 80;
    int forca3 = (rand() % 30) + 10;
    int fa1 = (rand()% 10000) + 1;
      int fa2 = (rand()% 10000) + 1;
    //print do Judas
         printf("Judas:\n");
    printf("Golpe:%d\n",golpe1);
    printf("Força:%d\n\n",forca1);
     //print do Judas
         printf("Azazel:\n");
    printf("Golpe:%d\n",golpe2);
    printf("Força:%d\n\n",forca2);
     //print do Judas
         printf("Isaac:\n");
    printf("Golpe: %d\n",golpe3);
    printf("Força: %d\n\n",forca3);
     int vs = (rand() % 3) + 1;
    if (vs==1){
        printf("Azazel Vs Judas\n\n");
           if (((golpe2+forca2)*fa1)>((golpe1+forca1)*fa2)){
                printf("Azazel Win\n"); } else if((golpe2+forca2)==(golpe1+forca1)){
                    printf ("DRAW\n");
                }else{
                    printf("Judas Win\n");
                }
    }
     if (vs==2){
        printf("Azazel Vs Isaac\n\n");
         if (((golpe2+forca2)*fa1)>((golpe3+forca3)*fa2)){
                printf("Azazel Win\n"); }  else if((golpe2+forca2)==(golpe3+forca3)){
                    printf ("DRAW\n");
                }else{ 
                    printf("Isaac Win\n");
                }
    }
     if (vs==3){
        printf("Judas Vs Isaac\n\n");
         if ((golpe1+forca1)>(golpe3+forca3)){
                printf("Judas Win\n"); } else  if((golpe2+forca2)==(golpe1+forca1)){
                    printf ("DRAW\n");
                }else{ 
                    printf("Isaac Win\n");
                }
    }
    printf ("deseja jogar novamente?\n (informe sim ou nao)\n");
    scanf("%s",jn);
    
}while ((strcmp(jn, "sim")) == 0);
    printf("Programa encerrado.\n");

    return 0;
}