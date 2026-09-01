#include<stdio.h>
main() 
{
	float aux;
	int quantidade;
		
		printf("Informe a quantidade: ");
		scanf("%d",&quantidade);
		
		float notas[quantidade];
		
		for(int i=0; i<quantidade; i++){
			printf("informe sua nota: ");
			scanf("%f",&notas[i]);
			}	
			
			for(int i=0; i<quantidade-1; i++){
				for(int j=0; j<quantidade-1; j++){
					if(notas[j]> notas[j+1]){
						aux = notas[j];
						notas[j] = notas[j+1];
						notas[j+1] = aux;
			}
		}
	}
		for(int i=0; i<5; i++){
			printf("%.2f\n", notas[i]);
		}
	}
	

			

