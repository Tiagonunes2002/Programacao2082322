/*
 ============================================================================
 Name        : Ficha_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
/*
	float projeto1 =10;
	float projeto2 = 10;
	float frequencia = 15;
	float mediaf=(projeto1*0.3)+(projeto2*0.3) +(frequencia*0.4);

	if(mediaf > 10){
		printf("O aluno esta aprovado.\n\n");
	}

	else {
		printf("O aluno esta reprovado.\n\n");
	}




//	=================   exercicio 2  ====================

	printf("_____________ EXERCICIO 2  __________\n\n");

	float altura;

    printf("Indique a altura em cm :");

	scanf( "%f" , &altura);



	if( altura < 150 ){

		printf(" Estatura pequena\n\n");
	}

	else if( altura > 175 ){

			printf("\n Tem uma estatura alta\n\n");
	}
	else {
			printf("\n Tem uma estatura media\n\n");
	}

	//	=================   exercicio 3  ====================

		printf("_____________ EXERCICIO 3  __________\n\n");

		int numeroMes;

		printf("Indique o numero do mês :");

		scanf( "%i" , &numeroMes);

		if( numeroMes == 1 ){

			 printf("\n janeiro");
		}

		else if( numeroMes == 2 ){

			 printf("\n fevereiro");
			}
		else if( numeroMes == 3 ){

			 printf("\n março");
					}
		else if( numeroMes == 4 ){

			 printf("\n abril");
					}
		else if( numeroMes == 5 ){

			 printf("\n maio");
					}
		else if( numeroMes == 6 ){

			 printf("\n junho");
					}
		else if( numeroMes == 7 ){

			 printf("\n julho");
					}
		else if( numeroMes == 8 ){

			 printf("\n agosto");
					}
		else if( numeroMes == 9){

			 printf("\n setembro");
					}

		else if( numeroMes == 10 ){

			 printf("\n outubro");
					}


		else if( numeroMes == 11 ){

			 printf("\n novembro");
					}


		else if( numeroMes == 12 ){

			 printf("\n desembro");
					}
		else {
		        printf("\n ---O numero inserido não coresponde a um numero do mês. ---- ");
					}


		//	=================   exercicio 4  ====================

				printf("\n\n_____________ EXERCICIO 4  __________\n\n");

		float numero1;
		float numero2;
		char operador;
		float resultado;

		printf("Indique o numero 1 :");
				scanf( "%f" , &numero1);

		printf("Indique o numero 2 :");
			    scanf( "%f" , &numero2);

		printf("Indique o operador :");

			    scanf(" %c" , &operador);


	    if( operador == '+'){

	    	resultado = numero1 + numero2;

			printf("\n o resultado e : %f", resultado);
}

		else if( operador =='*'){

			resultado = numero1 * numero2;

			printf("\n o resultado e : %f", resultado);

}
		else if( operador == '/'){

			resultado = numero1 / numero2;

					printf("\n o resultado e : %f", resultado);
		}

		else if( operador == '^'){

					resultado = pow(numero1, numero2);

							printf("\n o resultado e : %f", resultado);
				}


		else if( operador == '-' ){

					float resultado = numero1 - numero2;

					printf("\n o resultado e : %f", resultado);
		}
	return 0;




//	=================   exercicio 5  ====================

				printf("\n\n_____________ EXERCICIO 5 __________\n\n");


				int soma = 0;
				int i = 1;
				int max = 100;

				while (i<= max){
				soma = soma + i;
				i++;
				}

				printf("\ A soma ate %i e de  : %i", max, soma);



				//	=================   exercicio 6  ====================

								printf("\n\n_____________ EXERCICIO 6 __________\n\n");


				int index = 1;

				int max1 = 20;

				while ( index <= max1){
					if (index % 5 ==0){

					printf("\n %i",index);
					}
						index++;

			    }
*/
				//	=================   exercicio 7  ====================

						     printf("\n\n_____________ EXERCICIO 7 __________\n\n");
                int numero = 5;
				int n = numero;

				int factorial = 1;

				while(n>=1){

				factorial = factorial* n;
				n--;

				}

				printf("\n O resultado de %i! e de : %i",numero,factorial);



}



