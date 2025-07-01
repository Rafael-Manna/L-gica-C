
#include <stdio.h>

int main()
{
    int j = 2;
    int q;
    int numero = 0;
    int menor = 0;
    int possivel= 1;
    printf("quantos numeros?");
    scanf("%d", &q);
    printf("1º  numero?");
    scanf("%d",&numero);
    menor = numero;
    
    for(int i=1; i<q;i++){
    printf("%dº  numero?", j++);
    scanf("%d",&numero);
        
        if(numero<menor){
    menor = numero;
     possivel = 0;
        } 
        if( numero==menor){
            possivel++;
        }
       
    }
     printf ("Menor numero: %d\n", menor);
     printf("quantas vezes ele apareceu: %d\n", possivel);
   
   
    return 0;
}