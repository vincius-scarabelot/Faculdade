//professor pede o nome x aluno e a nota 1 e 2, nome do aluno nota e media,mais alta e mais baixa em ordem e nome do aluno
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
main() 
{
	int alunos,i,j;
	
	
	printf("informe a quantidade de alunos: ");
	scanf("%d",&alunos);
	getchar();
	
	char auxiliar[50];
	char nome[alunos][50];
	float nota1[alunos], nota2[alunos], media[alunos],aux;
	
	
	for(i=0;i<alunos;i++)
	{
		printf("\ninforme o nome do aluno:");
		 fgets(nome[i], sizeof(nome), stdin);
		  nome[i][strcspn(nome[i], "\n")] = '\0';
		 
		 printf("informe sua nota 1:");
		 scanf("%f", &nota1[i]);	
		 
		 printf("informe sua nota 2:");
		 scanf("%f", &nota2[i]);
		 getchar();
		 
		 media[i]=(nota1[i]+nota2[i])/2;
	}
	
	printf("================== VISAO GERAL=============\n");
	for(i=0;i<alunos;i++){
		printf("Alunos: %s\nnota1: %.2f\nnota2: %.2f\nmedia: %.2f; \n\n", nome[i], nota1[i], nota2[i], media[i] );
	}
	for(i=0; i<alunos-1;i++)
	//for para realizar  as trocas
	{
		for(j=0;j<alunos-1;j++){
			aux=0;
			if(media[j] < media[j+1]){
				aux=media[j];
				media[j]= media[j+1];
				media[j+1]=aux;
				
				aux=0;
				
				aux=nota1[j];
				nota1[j]=nota1[j+1];
				nota1[j+1]=aux;
				
				aux=0;
				
				aux=nota2[j];
				nota2[j]= nota2[j+1];
				nota2[j+1]= aux;
				
				strcpy(auxiliar, nome[j]);
				strcpy(nome[j], nome[j+1]);
				strcpy(nome[j+1], auxiliar);
				
			}
		}
	}
	
}
