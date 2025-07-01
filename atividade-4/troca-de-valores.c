/* Ler dois valores para as variáveis A e B e efetuar a troca dos valores de forma que a 
variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor 
da variável A. Mostre os valores após o processamento da troca. */
#include <stdio.h>
int main()
{
    int a,b, aux =0;
    printf("valor A:");
    scanf("%d", &a);
    printf("valor b:");
    scanf("%d", &b);
    aux=b;
    b=a;
    a=aux;
printf("valor A trocado:%d",a);
 printf("valor B trocado:%d",b);

    return 0;
}