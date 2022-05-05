//algoritmo "CalculaIrfonte"
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	float salario, desconto, salir, ir;
    int dependentes;
    char resp;
    
    	setlocale (LC_ALL,"Portuguese");
    	resp = 'n';
    	printf("Calcula o valor do IR a ser retido na fonte(salário)\n");
    	do
    	{
            printf("\NInforme o valor do salário: ");
            scanf("%f",&salario);
            printf("Informe a quantidade de dependentes para IR: ");
            scanf("%i",&dependentes);
            salir = salario - (dependentes * 189.59);
            printf("O salário para efeito de calculo do IR na fonte será: R$ %.2f\n" , salir);
            if (salir <= 1903.98)
            	ir <- 0;
            else
              if (salir <= 2826.65) 
                 ir <- salir * 7.5 / 100 - 142.8;
              else
                   if (salir <= 3751.05)
                      ir <- salir * 15 / 100 - 354.8;
                   else
                        if (salir <= 4664.68)
                           ir <- salir * 22.5 / 100 - 636.13;
                        else
                           ir <- salir * 27.5 / 100 - 869.36;
            printf("O desconto de IR na fonte será de R$ %f\n" , ir); 
			printf("O desconto de IR na fonte será de R$ %.2f\n\n" , ir);
			printf("Deseja executar este programa novamente?(s/n): ");
			resp = getche();                
            while((resp!='s') && (resp!='n'))
            {
               printf("\nResposta inválida! Digite s ou n: ");
               resp = getche();	
			}
        } while(resp == 's');          
        printf("\nObrigado por utilizar o programa CalculaIRfonte!\n\n");
}



