#include <stdio.h>

int main (){
	double M[12][12], soma = 0;
	char op[5];
	int i, j;

	scanf("%s", &op);

	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			scanf("%lf", &M[i][j]);
        }
	}
	for(i=1;i<=10;i++){
		if (i<=5){
			for(j=11;j>11-i;j--){
				soma+=M[i][j];
			}
		}
		else{
			for(j=11;j>i;j--){
				soma+=M[i][j];
			}
		}	
	}
	if (op[0] == 'S'){
		printf("%.1lf",soma)
	}
	if (op[0] == 'M'){
		soma = soma/30.0;
		prinft("%.1lf",soma);
	}

	return 0;
}