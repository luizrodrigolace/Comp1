#include <stdio.h>
#include <stdlib.h>

/*typedef struct{
    char nome[80];
    float nota;
}nota;*/

int main (void){

    FILE *arquivo;
    /*nota nota_alunos;*/
    float nota, media = 0.0;
    int qtd, i=0;
    char c, temp[5];

    arquivo = fopen("notas.txt", "a+");

    if(arquivo == NULL) exit(1);

    c = fgetc(arquivo);
    while (!feof(arquivo)){
        if((c>= '0' && c<= '9') || c == '.'){
            temp[i] = c;
            i++;
        }
        if (c == '\n'){
            qtd++;
            media += atof(temp);
            i = 0;
        }

        /*fputc(c,stdout);*/
        c = fgetc(arquivo);
    }

    printf("A media ate o momento eh: %f\n", media/qtd);

    printf("Digite o nome do aluno: ");
    scanf("%f", &nota);

    /*scanf("%s", nota_alunos.nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota_alunos.nota);

    fprintf(arquivo,"%s - %.1f\n",nota_alunos.nome,nota_alunos.nota);*/

    fprintf(arquivo,"%.1f\n",nota);

    fclose(arquivo);

    return 0;
}