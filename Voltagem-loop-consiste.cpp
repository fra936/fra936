// chamadas da bibliotecas que ser�o utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// iniciar o m�todo principal
int main()
{ 
   //declarar vari�veis locais
   float resist, corrente, voltagem;
   char resp;
   printf("Programa que calcula voltagem a partir da resist\210ncia e corrente");
   do{ // loop de repeti��o do programa
      // solcitar e receber os dados necess�rios para o c�lculo
      printf("\n\nDigite o valor da resist\210ncia em ohms: ");
      scanf("%f" ,&resist);
      printf("Digite o valor da corrente em Amperes: ");
      scanf("%f" ,&corrente);
      // usar a f�rmula e fazer o c�lculo para em seguida mostrar o resultado
      voltagem = resist * corrente;
      printf("\ncom a resist\210ncia %.1f ohms e corrente %.1f Amperes resulta na Voltagem %.2f Volts\n\n" ,resist,corrente,voltagem);
      printf("Deseja executar este programa novamente?(s/n): ");
      resp = getche();
      while(resp!='s' && resp!='S' && resp!='n' && resp!='N'){ // loop de consist�ncia de dados
         printf("\nResposta inv\240lida! Digite s ou n: ");
         resp = getche();
	    
	   }	 	 
   }while(resp=='s' || resp=='S'); // seo usu�rio quiser
   printf("\n\nObrigado por utilizar este programa!\n\n");
   system("pause");
}

