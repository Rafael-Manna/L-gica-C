//Pergunte o nome da pessoa e apresente a saudação: "Bem vindo, <nome_da_pessoa>"
#include <stdio.h>
int main()
{
    char nome[15]= "";
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Bem vindo, %s", nome);

    return 0;
}