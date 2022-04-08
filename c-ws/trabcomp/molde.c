#include <stdio.h>
#include <stdlib.h>
#include <time.h> /*time()*/
#include <string.h>
#include <unistd.h> /*fucao sleep*/
#include "molde.h"

/* Essa funcao que retorna o boneco da forca dependendo da vida e da situacao do jogador (morto ou vivo)*/
void boneco(int vidas, int situacao){
    if(vidas > 0 && situacao == 1){
        printf("  O\n");
        printf(" \\|/ \n");
        printf("  |   \n");
        printf(" / \\  \n");

    }
    if(vidas == 0 && situacao ==-1){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |         |   \n");
        printf(" |        / \\  \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 1 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |         |   \n");
        printf(" |        /   \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 2 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |         |   \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 3 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /|\\ \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 4 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |        /| \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
    if(vidas == 5 && situacao ==0){
        printf("  -----------\n");
        printf(" |         O\n");
        printf(" |          \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }

    if(vidas == 6 && situacao ==0){
        printf("  -----------\n");
        printf(" |         \n");
        printf(" |          \n");
        printf(" |            \n");
        printf(" |             \n");
        printf(" |  \n");
        printf("---\n");
    }
}

/*funçao que printa as regras do jogo*/
void regras(char opcaoSelecionada){
	if (opcaoSelecionada == 'S' || opcaoSelecionada == 's'){
		int j;
		printf("\n");
		printf("  Objetivo: O objetivo desse jogo é descobrir uma palavra adivinhando as letras que ela possui.\n");
		printf("\n");
		printf("  Regras:\n");
		printf("        1. Selecione a temática que você deseja jogar;\n");
		printf("        2. Escolha uma letra que você suspeita que a palavra oculta possua;\n");
		printf("        3. Se acertar, a letra irá aparecer no seu respectivo lugar na palavra oculta;\n");
		printf("        4. Se errar, um boneco será desenhado (primeiro a cabeça, depois o braços,tronco em seguida pernas.) e uma vida será descontada;\n");
		printf("        5. O jogador perde se não conseguir identificar a palavra antes do desenho estar completo;\n");
		printf("        6. O jogador ganha se conseguir identificar a palavra antes do desenho estar completo.\n");
		printf("\n");
		
		printf("  -------------------->>> PARA COMEÇAR O JOGO DIGITE 1 <<<<--------------------\n");
		scanf("%d", &j);
		if(j == 1){
			system("clear");
		}	
	}	
}

/*Essa funcao realiza a abertura do arquivo escolhido pelo usuario e retorna uma palavra sorteada do arquivo*/
char* sorteioPalavra(char escolha) {

    /*alocando memoria para um ponteiro do tipo char*/
    char *palavra = malloc(sizeof(char) * 20);
    /*A variavel nPalavras funciona como um contador de palavras que existem no arquivo*/
    int nPalavras = 0;
    /*A variavel nSorteio guarda um numero sorteado de 0 a quantidade de palavras existentes no arquivo*/
    int nSorteio;
    int i;

    FILE *arquivo;

    /*Abrindo o arquivo para leitura*/
    if (escolha == '1'){
        arquivo = fopen("animais.txt", "r");
    }
    else if(escolha == '2'){
        arquivo = fopen("comidas.txt", "r");
    }
    else{
        arquivo = fopen("profissoes.txt", "r");
    }

    /*Analisando se o arquivo foi aberto corretamente*/
    if( arquivo == NULL ) {
        printf("Erro: ");
        getchar();
        exit(1);
    }

    /*Contando quantas palavras existem no arquivo*/
    while( fscanf( arquivo, "%s", palavra) != EOF ){
        nPalavras++;
    }
    /*voltamos o ponteiro ao principio do arquivo para poder ler uma nova palavra*/
    rewind(arquivo);

	/*A "semente" do gerador de numeros aleatorios*/
    srand (time(NULL));

    /*Sorteia um numero ate o numero de linhas existentes no arquivo*/ 
    nSorteio = rand() % (nPalavras )+1; 

    /*percorrendo o arquivo e pegando a palavra correspondente ao numero sorteado*/
    for(i=0; i<nSorteio; i++){
		fscanf(arquivo, "%s", palavra);
    }
        
 	/*Fechando o arquivo*/
    fclose(arquivo);

    return palavra;
}