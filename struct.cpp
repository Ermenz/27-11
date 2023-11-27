
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct ficha_aluno {
    char nome[200];
    int idade;
    };
    
    struct ficha_aluno;
 
 
    printf("Digite o nome do aluno");
    gets(nome);
    
     
    printf("Digite a idade do aluno");
    scanf("%d", &idade);
    
    printf("Exibindo dados do aluno\n");
    
    printf("Nome do aluno %s", nome);
    printf("idade do aluno %d", idade);
    

    return 0;
}

