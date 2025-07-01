/*Calcule o valor de auxílio creche que a pessoa vai receber com base na quantidade 
de filhos que ela tem. Para cada criança a pessoa vai receber R$ 50,00. */
#include <stdio.h>
int main()
{
    int filhos,valor;
    printf("quantos filhos você tem?");
    scanf("%d", &filhos);
    valor = filhos*50;
    printf("o valor de seu auxílio é: %d", valor);
    return 0;
}
