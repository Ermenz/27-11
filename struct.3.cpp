#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
    struct ficha_usuario {
    char nome[200];
    int idade  ;
    char endereco[200];
	};
    
    int i;
    struct ficha_usuario usuario[3];
 
 
 
   for(i = 0; i <1; i++)  {
    printf("Digite o seu nome\n");
    scanf("%s", &usuario[i].nome);
    
      
    printf("Digite a sua idade\n");
    scanf("%d", &usuario[i].idade);
    
    
      printf("Digite o endere�o\n");
    scanf("%s", &usuario[i].endereco);
    	}
    
     printf("\n");
     printf("Exibindo dados do usu�rio\n");
  
     for(i = 0; i <1; i++)  {
    printf("Nome do usu�rio: %s\n", usuario[i].nome);
    printf("idade do usu�rio: %d\n", usuario[i].idade);

    printf("Endere�o do usu�rio: %s\n", usuario[i].endereco);
    
    }
    
    
    
    
    
      }
