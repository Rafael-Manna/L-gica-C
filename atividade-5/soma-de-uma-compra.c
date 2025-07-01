/*A padaria Pãozinho vende uma certa quantidade de pães franceses e uma quantidade 
de empadas a cada dia. Cada pãozinho custa R$ 0,15 e a empada custa R$ 2,50. Ao 
final do dia, o dono quer saber quanto arrecadou com a venda dos pães e empadas
(juntos), e quanto deve guardar numa conta de poupança (15% do total arrecadado). 
Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um 
algoritmo para ler as quantidades de pães e de empadas, e depois calcular os dados 
solicitados.*/
#include <stdio.h>
int main()
{
    float pao,empada,vendas,poupança;
    printf("quantos paes vendidos?");
    scanf("%f",&pao);
    printf("quantas empadas vendidos?");
    scanf("%f",&empada);
    empada = empada *2.50;
    pao = pao*0.15;
    vendas = pao+empada;
    poupança = vendas*0.15;
    printf ("vendeu %.2f reais, ",vendas);
        printf ("e sera colocado %.2f reais na poupança. ",poupança);
    return 0;
}
