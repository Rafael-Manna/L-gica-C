#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> 
#define TAM 15
int main()
{
    int num [TAM];
    int i=0;
    srand(time(NULL));
    for(i=0;i<TAM;i++){
        num[i] = (rand()%300) + 1;
        printf("[%d] = %d\n",i,num[i]);
    }

    return 0;
}
