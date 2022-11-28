#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define loop 1

void alerta(int alert){
	switch(alert){
		case 1:
			system("cls");
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!! DIGITE UMA OPCAO VALIDA !!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;
		case 2:
			system("cls");	
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!! PROGRAMA ENCERRADO COM SUCESSO !!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;
	}	
};



main(){
	int p = 0, menu, i, j = 0, m, n;
	char frases[100], frasesCripto[300];
	
	FILE *cripto;
	
	while(loop == 1){
		system("cls");
		printf("\n\t\t\t\t        _________________________________\n");
		printf("\t\t\t\t\t| 1. Criptografar uma string    |\n");
		printf("\t\t\t\t\t| 2. Descriptografar uma string |\n");
		printf("\t\t\t\t\t| 3. Ver arquivo                |\n");
		printf("\t\t\t\t\t| 4. Sair                       |\n\n\n\n\n");
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
							frasesCripto[j++] = '3';
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
				cripto = fopen("criptografia.txt", "w+b");
				fprintf(cripto, frasesCripto);
				fclose(cripto);
				system("pause");		
				break;
			case 2:
				cripto = fopen("criptografia.txt", "r+b");
				fflush(stdin);
				fgets(frasesCripto, 300, cripto);
				fclose(cripto);
				for(i = 0, j = 0; frasesCripto[i] != '\0'; i++)
				{
					switch(frasesCripto[i])
					{
						case '0':
							i++;
							switch(frasesCripto[i])
							{
								case '1':
									frases[j++] = 'A';
									i++;
									break;
								case '2':
									frases[j++] = 'B';
									i++;
									break;
								case '3':
									frases[j++] = 'C';
									i++;
									break;
								case '4':
									frases[j++] = 'D';
									i++;
									break;
								case '5':
									frases[j++] = 'E';
									i++;
									break;
								case '6':
									frases[j++] = 'F';
									i++;
									break;
								case '7':
									frases[j++] = 'G';
									i++;
									break;
								case '8':
									frases[j++] = 'H';
									i++;
									break;
								case '9':
									frases[j++] = 'I';
									i++;
									break;										
							}
							break;
						case '1':
							i++;
							switch(frasesCripto[i])
							{
								case '0':
									frases[j++] = 'J';
									i++;
									break;
								case '1':
									frases[j++] = 'K';
									i++;
									break;
								case '2':
									frases[j++] = 'L';
									i++;
									break;
								case '3':
									frases[j++] = 'M';
									i++;
									break;
								case '4':
									frases[j++] = 'N';
									i++;
									break;
								case '5':
									frases[j++] = 'O';
									i++;
									break;
								case '6':
									frases[j++] = 'P';
									i++;
									break;
								case '7':
									frases[j++] = 'Q';
									i++;
									break;
								case '8':
									frases[j++] = 'R';
									i++;
									break;
								case '9':
									frases[j++] = 'S';
									i++;
									break;										
							}
							break;
						case '2':
							i++;
							switch(frasesCripto[i])
							{
								case '0':
									frases[j++] = 'T';
									i++;
									break;
								case '1':
									frases[j++] = 'U';
									i++;
									break;
								case '2':
									frases[j++] = 'V';
									i++;
									break;
								case '3':
									frases[j++] = 'W';
									i++;
									break;
								case '4':
									frases[j++] = 'X';
									i++;
									break;
								case '5':
									frases[j++] = 'Y';
									i++;
									break;
								case '6':
									frases[j++] = 'Z';
									i++;
									break;									
							}
							break;
						case 32:
							i++;
							frases[j++] = ' ';
							break;
						default:
							break;			
					}	
				}
				cripto = fopen("criptografia.txt", "w+b");
				fprintf(cripto, frases);
				fclose(cripto);
				system("pause");
				break;
			case 3:
				cripto = fopen("criptografia.txt", "r+b");
				fgets(frasesCripto, 300, cripto);
				fclose(cripto);
				printf("%s", frasesCripto);
				printf("\n\n");			
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
