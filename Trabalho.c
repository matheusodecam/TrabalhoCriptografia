#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define loop 1 // Variavel definida para executar o menu em loop

void alerta(int alert){ // Funcao para dar os alertas na tela
	switch(alert)
	{
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
	system("color 74"); // Comando para alterar as cores do prompt
	
	//Definicao das variaveis/////////////////////////////////////
	int menu, i, j = 0;
	char frases[100], frasesCripto[300], fraseDescripto[100], condicao[2];
	//////////////////////////////////////////////////////////////
	FILE *cripto, *boolean; // Criando o ponteiro que dara acesso ao arquivo criptografia.txt
	
	while(loop == 1) // Loop para executar o menu
	{
		/////// MENU ///////////////////////////////////////////////////////////////////////
		system("cls"); // limpa a tela
		printf("\n\n\n\n\t\t\t\t        _________________________________\n");
		printf("\t\t\t\t\t| 1. Criptografar uma string    |\n");
		printf("\t\t\t\t\t| 2. Descriptografar uma string |\n");
		printf("\t\t\t\t\t| 3. Ver arquivo                |\n");
		printf("\t\t\t\t\t| 4. Sair                       |\n\n\n\n\n\n\n");
		printf("\t\t\t\t\tOpcao escolhida -> ");
		fflush(stdin);
		scanf("%d", &menu); // Lendo a variavel 'menu' que sera usada para o switch/case/////
		/////////////////////////////////////////////////////////////////////////////////////
		
		/*////// REINICIANDO OS 4 VETORES DE STRING SEMPRE QUE FOR COMECAR O NOVO LOOP ////////////////////////////////////////////////////
		memset(frases, 0, 100); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
		memset(frasesCripto, 0, 300); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
		memset(condicao, 0, 2); // Reseta o vetor condicao
		memset(fraseDescripto, 0, 100); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'	
		////// REINICIANDO OS 4 VETORES DE STRING //////////////////////////////////////////////////////////////////////////////////////*/
		
		switch(menu){ // switch/case do menu
			
			case 1: // Se o usuario digitar '1' ele criptografara
				system("cls");
				fflush(stdin); // limpa o buffer
				printf("\n\n\n\n\n\t\t\t\t Digite a frase a ser criptografada:\n\n\n\n\n\t\t\t\t-> ");
				gets(frases); // recebe os dados do teclado enquanto o usuaria nao apertar enter
				
				for(i = 0; frases[i] != '\0'; i++) // Vai percorrer toda a string digitada
				{
					if((frases[i] > 64 && frases[i] < 91) || (frases[i] > 96 && frases[i] < 123) || frases[i] == 32) // Condicao para verificar se o caractere é letra ou espaco
					{
						frasesCripto[j] = toupper(frases[i]); // Se for letra ou espaco, ele atribui o valor a outra string, ja formatado para letras maiusculas
			
						switch(frasesCripto[j]) // Vai criptografar cada elemento da string de letras ou espacos
						{
							case 'A': ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
								frasesCripto[j++] = '0';	/////////// Vai olhar letra por letra e subistituir o valor atual por um outro e adicionar outras dois valores nas duas proximas posicoes do vetor////
								frasesCripto[j++] = '1';	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
				} //////////////////////////////////////// o vetor ja esta criptografado ///////////////////////
				fflush(stdin);
				cripto = fopen("criptografia.txt", "w+b"); // Abrira o arquivo 'criptografia.txt', caso ele nao exista, sera criado
				fprintf(cripto, frasesCripto); // Escreve a string criptografada no arquivo
				fclose(cripto); // fecha o arquivo
				memset(frases, 0, 100); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
				memset(frasesCripto, 0, 300); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
				alerta(3); // exibe o alerta 3
				condicao[0] = 't'; // Atribui o valor 1 pra string condicao
				boolean = fopen("boolean.txt", "w+b"); // Abre o arquivo pra booleano
				fprintf(boolean, condicao); // Escreve no arquivo booleano o valor de condicao que é t
				fclose(boolean); // Fecha o arquivo booleano
				memset(condicao, 0, 2); // Reseta o vetor condicao
				system("pause");		
				break;
				
			case 2: // Se o usuario digitar '2' ele descriptografara
				memset(frasesCripto, 0, 300); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
				fflush(stdin);
				cripto = fopen("criptografia.txt", "r"); // Abre o arquivo 'criptografia.txt' para leitura
				if(cripto == NULL) // Caso o arquivo nao exista. Ele avisa que nao sera permitido descriptografar
				{
					alerta(5);
					fclose(cripto); // fecha o arquivo
					system("pause");
					break;
				}else // Caso exista o arquivo ele ira verificar a permissao para descriptografacao
				{
					fgets(frasesCripto, 300, cripto); // Atribui a string lida no arquivo para o vetor
					fclose(cripto); // fecha o arquivo
					memset(condicao, 0, 2); // Reseta o vetor condicao
					boolean = fopen("boolean.txt", "r"); // Abre o arquivo booleano e ler o valor que tem no arquivo
					fflush(stdin);
					fgets(condicao, 2, boolean); // Atribui o valor lido para a variavel condicao
					fclose(boolean); // Fecha o arquivo
					switch(condicao[0]) // Aqui ele verifica o valor da string condicao
					{ 
						case 'f': // Se for zero, significa que nao sera permitido descriptografar
							alerta(5);
							system("pause");
							break;
						case 't': // Se for 1 ele permitira descriptografar
							for(i = 0, j = 0; frasesCripto[i] != '\0'; i++) /////////////////////////////////////////////////////////////////////////
							{												//// O for sera executado enquanto nao achar o final da string //////////
								switch(frasesCripto[i])						/////////////////////////////////////////////////////////////////////////						
								{	// Vai verificar as posicoes de 3 em 3
									case '0': // Se a primeira lida for 0 ele entra e incrementa o i
										i++;
										switch(frasesCripto[i]) // O i foi incrementado, entao agora vai verificar a proxima posicao
										{
											case '1': // E caso a proxima posicao for 1 ele passa o caractere para um vetor e incrementa o i novamente, isso sera feito para os 27 casos
												fraseDescripto[j++] = 'A'; //////////////// que sao as 26 letras e o espaco //////////////////////
												i++; //// Incrementa o I sempre, para poder pular o underline
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
										fraseDescripto[j++] = ' '; // ele nao incrementa o i, pois o caractere espaco nao é criptografado
										break;
									default:
										break;			
								}	
							}
							fflush(stdin);
							cripto = fopen("criptografia.txt", "w+"); // Abre o arquivo novamente, so que agora permitindo sobescreve-lo
							//fwrite(fraseDescripto, 1, sizeof(fraseDescripto), cripto);
							fputs(fraseDescripto, cripto); // Escreve no arquivo o valor do vetor descriptografado
							fclose(cripto); // fecha o arquivo
							alerta(4); // exibe o alerta 4
							condicao[0] = 'f'; // Atribui o valor 1 pra string condicao
							boolean = fopen("boolean.txt", "w+b"); // Abre o arquivo pra booleano
							fprintf(boolean, condicao); // Escreve no arquivo booleano o valor de condicao que é 1
							fclose(boolean); // Fecha o arquivo booleano
							memset(fraseDescripto, 0, 100); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
							memset(frasesCripto, 0, 300); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
							memset(condicao, 0, 2); // Reseta o vetor condicao
							system("pause");
							break;
						default: // Caso leia alguma coisa errada do arquivo booleano
							alerta(5);
							fclose(cripto); // fecha o arquivo
							system("pause");
							break;
					}
				}
				break;
				
			case 3: // Se o usuario digitar '3' ele exibira o conteudo do arquivo 
				system("cls");
				fflush(stdin);
				memset(frasesCripto, 0, 300); // Sera atribuido \0 para a posicao inicial do vetor, assim ele sera 'resetado'
				cripto = fopen("criptografia.txt", "r"); // Abre o arquivo para leitura
				if(cripto == NULL) // Caso o arquivo nao exista, ele vai informar o erro e voltara para o menu
				{
					alerta(6); // exibe o alerta 6
					system("pause");
					break;
				}else
				{
					fflush(stdin);
					fgets(frasesCripto, sizeof(frasesCripto), cripto); // caso exista, ele atribui a string do arquivo para um vetor
					printf("\n\n\n\n\n\t\t\t\tCONTEUDO DO ARQUIVO:\n\n\n\n\n\t\t\t\t-> %s\n\n\n\n\n\n\n\n\n", frasesCripto); // Aqui ele exibe o vetor
					printf("\n\n");			
					system("pause");
					fclose(cripto); // fecha o arquivo
				}
				break;
				
			case 4: // Se o usuario digitar '4' ira encerrar o programa
				system("cls");
				alerta(2); // exibe o alerta 2
				system("pause");
				return 0; //Retornara um valor para a funcao main, para encerrar o programa
				 
			default: // Se n for nenhuma das outras opcoes, ele executara o loop novamente e pedira para exibir uma opcao valida
				system("cls");
				alerta(1); // exibe o alerta 1
				system("pause");
				continue; 
		}	
	}
}
