/*Luiz Rodrigo Lacé Rodrigues 118049873*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DIM 6
#define INGRESSO 20
#define MEIA 0.5
#define BRADAU 0.3
int main (void){
	int filme, quantidadeIngresso,quantidadeMeia,soma,quantidadeBradau;
    char stringCarteira[DIM];
    int codigosUsado[100];

/*1-Escolhendo filme*/
	printf("Digite o filme que deseja assistir: 1(Star Trek), 2(Star Wars), 3(Tron): ");
	scanf("%d",&filme);
	while (filme <=0 || filme > 3){
        printf("Sala invalida, digite novamente: ");
		scanf("%d",&filme);
    }
    printf("Filme escolhido com sucesso.\n");

/*2-Escolhendo a quantidade de ingresso-*/
    printf("Digite a quantidade de ingressos que deseja comprar: ");
    scanf("%d", &quantidadeIngresso);
    while (quantidadeIngresso <=0 || quantidadeIngresso > 400){
        printf("Quantidade invalida, digite novamente: ");
		scanf("%d",&quantidadeIngresso);
    }
    printf("Quantidade escolhida com sucesso.\n");

/*3-Escolhendo a quantidade de ingressos com desconto de meia-entrada*/
    printf("Quantos com desconto de meia-entrada? ");
    scanf("%d", &quantidadeMeia);
    while (quantidadeMeia > quantidadeIngresso || quantidadeMeia<0){
        printf("Quantidade invalida, digite novamente: ");
		scanf("%d",&quantidadeMeia);
    }
    printf("Quantidade de meia-entrada escolhida com sucesso.\n");
    
/*4-Validando a meia-entrada*/
    if(quantidadeMeia>0){
        int contadorMeias = 0;
        int i = quantidadeMeia;
        while(i-1 > 0){
            printf("Digite a sua carteira de estudante ou aperte 0 para cancelar o desconto: ");
            scanf("%s",stringCarteira);
            if(stringCarteira[0] == '0'){
                printf("Desconto cancelado\n");
                i--;
            }
            else{
                soma = 0;
                for (i=0;i<4;i++){
                    soma += (stringCarteira[i] - '0');
                }
                if (soma%10 == stringCarteira[5] - '0'){
                    printf("Carteira valida\n");
                    i--;
                    contadorMeias+=1;
                }
                else{
                    printf("Carteira invalida\n");
                }
            }
        }    
    }
/* 5- Selecionando desconto Bradau-------------------------*/
    int contadordorBradau = 0;
    printf("Digite a quantidade de ingressos com desconto Bradau: ");
    scanf("%d", &quantidadeBradau);
    if (quantidadeBradau<0 || quantidadeBradau > (quantidadeIngresso)){
        printf("Digite uma quantidade possivel.");
    }
    if (quantidadeBradau == 0){
        continue;
    }
    int contadordorBradau =0









	return 0;


}