#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

    
int main(){
	//1) Perguntar qual a tabuada para o usuario
	// e armazenar o valor numa variavel
	int tabuada = 0;
	printf("Por favor informe a tabuada que voce deseja\n\t\t\t\n>>>");	
	scanf("%i" , &tabuada);
	//2) iMPLEMENTACAO DE UM LACO DE REPETICAO fOR
	for(int x = 1; x<=10; ++x){
		printf("%ix%i = %i\n" ,x , tabuada , x * tabuada);
	}
	system("pause");
	return 0;
	}

	

