#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de olaca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro()
{
	char arquivo[40];
     char cpf[40];
     char nome[40];
     char sobrenome[40];
     char cargo[40];
     
     printf("Digite o CPF a ser cadastrado:");
     scanf("%s",cpf);
     
     strcpy(arquivo, cpf);  //Resposavel por copiar os valores das string 
     
     FILE *file; // cria o arquivo no banco de dado
     file = fopen(arquivo, "w");
     fprintf(file,cpf); // salvo o valor da variavel
     fclose(file); // fecha o arquivo
     
     file = fopen(arquivo, "a");
     fprintf(file,",");
     fclose(file);
     
     printf("Digite o nome a ser cadastrado: ");
     scanf("%s" ,nome)
     
     file = fopen(arquivo, "a");
     fprintf(file,",");
     fclose(file);
	
     
     
     
    file = fopen(arquivo, "a");
     fprintf(file,",");
     fclose(file);
     
     printf("Digite o sobrenome a ser cadastrado:");
     scanf("%s",sobrenome);
     
     file = fopen(arquivo, "a");
     fprintf(file,sobrenome);
     fclose(file);
     
     file = fopen(arquivo, "a");
     fprintf(file,",");
     fclose(file);
     
     printf("Digite o cargo a ser cadastrado: ");
     scanf("%s",cargo);
     
     file = fopen(arquivo, "a");
     fprintf(file,cargo);
     fclose(file);
     
     system("pause");
     
     
     
     
     
}

int consulta()
{
	printf("Voc� escolheu consultar os nomes!\n");
	system("pause");
}

int deletar()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");
}


int main()
{
    int opcao=0;  //Definindo a vari�veis
	int laco=1;
   
    for(laco=1;laco=1;)	
    {
	
	system("cls");
	
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	printf("### Cart�rio da EBAC ###\n\n");  //Incio do menu
	printf("Escolha a op��o desejada do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");   
	printf("Op��o:");  //Fim do menu
	
    scanf("%d", &opcao);  //armazenando a escolha do usu�rio

    system("cls");
    
    
    switch(opcao)
    {
    	case 1:
    		registro();
    	break;
    	
    	case 2:
    		consulta();
        break;
        
        case 3:
        	deletar();
	        break;
	    
	   
	    
	    default:
	    		printf("Essa op��o n�o est� d�sponivel!\n");
		 system("pause");
		 break;
	}//fim da se��o
		 
    		
    		
}
    
   
    
	}

