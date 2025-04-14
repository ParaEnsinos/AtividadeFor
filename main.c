#include <stdio.h>
#include <locale.h>


int main() {
	
	// variaveis
	int i = 0, n1=0;
	
	setlocale(LC_ALL,"portuguese");
	
	//entrada de dados
	printf("Informe um número: ");
	scanf("%d",&n1);
	
	//laço de repetição para contar os valor 
	//If para descobrir o que e impar e par
	
	for(i = 1; i <=n1;i++){ //laço de repetição
		if(i % 2 == 0){ //Se eu dividir esse número por 2, vai sobrar quanto?
			printf("%d - PAR\n",i);
		}else{
			printf("%d - IMPAR\n",i);
		}
	}
	
	return 0;
}
