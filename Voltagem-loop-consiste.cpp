// chamadas da bibliotecas que serão utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// iniciar o método principal
int main()
{ 
   //declarar variáveis locais
   float resist, corrente, voltagem;
   char resp;
   printf("Programa que calcula voltagem a partir da resist\210ncia e corrente");
   do{ // loop de repetição do programa
      // solcitar e receber os dados necessários para o cálculo
      printf("\n\nDigite o valor da resist\210ncia em ohms: ");
      scanf("%f" ,&resist);
      printf("Digite o valor da corrente em Amperes: ");
      scanf("%f" ,&corrente);
      // usar a fórmula e fazer o cálculo para em seguida mostrar o resultado
      voltagem = resist * corrente;
      printf("\ncom a resist\210ncia %.1f ohms e corrente %.1f Amperes resulta na Voltagem %.2f Volts\n\n" ,resist,corrente,voltagem);
      printf("Deseja executar este programa novamente?(s/n): ");
      resp = getche();
      while(resp!='s' && resp!='S' && resp!='n' && resp!='N'){ // loop de consistência de dados
         printf("\nResposta inv\240lida! Digite s ou n: ");
         resp = getche();
	    
	   }	 	 
   }while(resp=='s' || resp=='S'); // seo usuário quiser
   printf("\n\nObrigado por utilizar este programa!\n\n");
   system("pause");
}

