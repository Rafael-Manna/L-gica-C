/******************************************************************************
Ler um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar, 
e se é positivo ou negativo. 
*******************************************************************************/
#include <stdio.h>
int main()
{
    int a;
    printf("seu primeiro valor: ");
    scanf("%d", &a);
    if(a%2!=0 && a>=0)
    {
        printf("é impar e positivo.");
    }
    else if(a%2!=0 && a<0)
    {
        printf("é impar e negativo.");
    } else if(a%2==0 && a>=0)
    {
        printf("é par e positivo.");
    }
    else if(a%2==0 && a<0)
    {
        printf("é par e negativo.");
    }
    return 0;
}
