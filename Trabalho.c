#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define loop 1

void alerta(int alert){
	switch(alert){
		case 1:
			printf("\a\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!! DIGITE UMA OPCAO VALIDA !!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;
		case 2:	
			printf("\a\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!! PROGRAMA ENCERRADO COM SUCESSO !!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;
	}	
};


main(){
	int p = 0, menu, i, j = 0, m, n;
	char frases[100], frasesCripto[300];
	
	FILE *cripto;
	//char palavra[100], frase[p][100];
	//gets(palavra);
	//	criptografar(palavra);
	//printf("%s\n", palavra);
	//cripto = fopen("criptografia.txt", "a");
	//fclose(cripto);
	
	while(loop == 1){
		system("cls");
		printf("1. Criptografar uma string\n");
		printf("2. Descriptografar uma string\n");
		printf("3. Ver arquivo\n");
		printf("4. Sair\n");
		fflush(stdin);
		scanf("%d", &menu);
			
		switch(menu){
			case 1:
				fflush(stdin);
				printf("Digite a frase a ser criptografada:\n");
				gets(frases);
				for(i = 0; frases[i] != '\0'; i++)
				{
					if((frases[i] > 64 && frases[i] < 91) || (frases[i] > 96 && frases[i] < 123) || frases[i] == 32)
					{
						frasesCripto[j] = toupper(frases[i]);
			
						switch(frasesCripto[j])
						{
						case 'A':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '_'; 
							break;
						case 'B':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '_';
							break;
						case 'C':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '3';
							frasesCripto[j++] = '_';
							break;
						case 'D':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '4';
							frasesCripto[j++] = '_';
							break;
						case 'E':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '5';
							frasesCripto[j++] = '_';
							break;
						case 'F':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '6';
							frasesCripto[j++] = '_';
							break;
						case 'G':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '7';
							frasesCripto[j++] = '_';
							break;
						case 'H':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '8';
							frasesCripto[j++] = '_';
							break;
						case 'I':
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '9';
							frasesCripto[j++] = '_';
							break;
						case 'J':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '_';
							break;
						case 'K':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '_';
							break;
						case 'L':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '_';
							break;
						case 'M':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '_';
							break;
						case 'N':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '4';
							frasesCripto[j++] = '_';
							break;
						case 'O':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '5';
							frasesCripto[j++] = '_';
							break;
						case 'P':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '6';
							frasesCripto[j++] = '_';
							break;
						case 'Q':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '7';
							frasesCripto[j++] = '_';
							break;
						case 'R':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '8';
							frasesCripto[j++] = '_';
							break;
						case 'S':
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '9';
							frasesCripto[j++] = '_';
							break;
						case 'T':
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '0';
							frasesCripto[j++] = '_';
							break;
						case 'U':
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '1';
							frasesCripto[j++] = '_';
							break;
						case 'V':
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '_';
							break;
						case 'W':
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '3';
							frasesCripto[j++] = '_';
							break;
						case 'X':
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '4';
							frasesCripto[j++] = '_';
							break;
						case 'Y':
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '5';
							frasesCripto[j++] = '_';
							break;
						case 'Z':
							frasesCripto[j++] = '2';
							frasesCripto[j++] = '6';
							frasesCripto[j++] = '_';
							break;
						case 32:
							frasesCripto[j++] = ' ';
						default:
							j++;
							break;
						}
					}		
				}
				cripto = fopen("criptografia.txt", "w");
				fprintf(cripto, frasesCripto);
				fclose(cripto);		
				break;
			case 2:
				printf("Escolheu o 2\n");
				system("pause");
				break;
			case 3:
				printf("Escolheu o 3\n");
				system("pause");
				break;
			case 4:
				system("cls");
				alerta(2);
				system("pause");
				return 0;
			default:
				alerta(1);
				system("pause");
				continue;
		}	
		
	}
}

















/**/
