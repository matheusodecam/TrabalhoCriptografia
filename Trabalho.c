#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define loop 1

void alerta(int alert){
	switch(alert){
		case 1:
			system("cls");
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!! DIGITE UMA OPCAO VALIDA !!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		case 2:
			system("cls");	
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!! PROGRAMA ENCERRADO COM SUCESSO !!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		case 3:
			system("cls");
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!! CRIPTOGRAFIA FEITA COM SUCESSO !!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;	
		case 4:
			system("cls");
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!!! A FRASE FOI DESCRIPTOGRAFADA !!!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;	
		case 5:	
			system("cls");
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!!!!!!!! ACAO NAO PERMITIDA !!!!!!!!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;
		case 6:
			system("cls");
			printf("\a\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\t\t\t\t\t!!!!!!!! O ARQUIVO NAO EXISTE !!!!!!!!\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
			break;	
	}	
};

main()
{
	system("color 74");
	int menu, i, j = 0;
	char frases[100], frasesCripto[300], fraseDescripto[100];
	
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
				system("cls");
				fflush(stdin);
				printf("Digite a frase a ser criptografada:\n\n\n-> ");
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
							break;
						default:
							break;
						}
					}		
				}
				fflush(stdin);
				cripto = fopen("criptografia.txt", "w+b");
				fprintf(cripto, frasesCripto);
				fclose(cripto);
				alerta(3);
				system("pause");		
				break;
			case 2:
				fflush(stdin);
				cripto = fopen("criptografia.txt", "r");
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
									fraseDescripto[j++] = 'A';
									i++;
									break;
								case '2':
									fraseDescripto[j++] = 'B';
									i++;
									break;
								case '3':
									fraseDescripto[j++] = 'C';
									i++;
									break;
								case '4':
									fraseDescripto[j++] = 'D';
									i++;
									break;
								case '5':
									fraseDescripto[j++] = 'E';
									i++;
									break;
								case '6':
									fraseDescripto[j++] = 'F';
									i++;
									break;
								case '7':
									fraseDescripto[j++] = 'G';
									i++;
									break;
								case '8':
									fraseDescripto[j++] = 'H';
									i++;
									break;
								case '9':
									fraseDescripto[j++] = 'I';
									i++;
									break;										
							}
							break;
						case '1':
							i++;
							switch(frasesCripto[i])
							{
								case '0':
									fraseDescripto[j++] = 'J';
									i++;
									break;
								case '1':
									fraseDescripto[j++] = 'K';
									i++;
									break;
								case '2':
									fraseDescripto[j++] = 'L';
									i++;
									break;
								case '3':
									fraseDescripto[j++] = 'M';
									i++;
									break;
								case '4':
									fraseDescripto[j++] = 'N';
									i++;
									break;
								case '5':
									fraseDescripto[j++] = 'O';
									i++;
									break;
								case '6':
									fraseDescripto[j++] = 'P';
									i++;
									break;
								case '7':
									fraseDescripto[j++] = 'Q';
									i++;
									break;
								case '8':
									fraseDescripto[j++] = 'R';
									i++;
									break;
								case '9':
									fraseDescripto[j++] = 'S';
									i++;
									break;										
							}
							break;
						case '2':
							i++;
							switch(frasesCripto[i])
							{
								case '0':
									fraseDescripto[j++] = 'T';
									i++;
									break;
								case '1':
									fraseDescripto[j++] = 'U';
									i++;
									break;
								case '2':
									fraseDescripto[j++] = 'V';
									i++;
									break;
								case '3':
									fraseDescripto[j++] = 'W';
									i++;
									break;
								case '4':
									fraseDescripto[j++] = 'X';
									i++;
									break;
								case '5':
									fraseDescripto[j++] = 'Y';
									i++;
									break;
								case '6':
									fraseDescripto[j++] = 'Z';
									i++;
									break;									
							}
							break;
						case 32:
							fraseDescripto[j++] = ' ';
							break;
						default:
							break;			
					}	
				}
				fflush(stdin);
				cripto = fopen("criptografia.txt", "w+b");
				fprintf(cripto, fraseDescripto);
				fclose(cripto);
				alerta(4);
				system("pause");
				break;
			case 3:
				system("cls");
				fflush(stdin);
				cripto = fopen("criptografia.txt", "r+b");
				if(cripto == NULL)
				{
					alerta(6);
					system("pause");
					break;
				}else{
					fgets(frasesCripto, 300, cripto);
					printf("CONTEUDO DO ARQUIVO:\n\n\n-> %s\n\n\n\n\n\n\n\n\n", frasesCripto);
					printf("\n\n");			
					system("pause");
					fclose(cripto);
				}
				break;
			case 4:
				system("cls");
				alerta(2);
				system("pause");
				return 0;
			default:
				system("cls");
				alerta(1);
				system("pause");
				continue;
		}	
		
	}
}
