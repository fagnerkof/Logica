#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
	{
		int nota1,nota2,nota3,nota4,media;
		char aluno[30];

		printf("Digite o nome do aluno:");
		scanf("%s",&aluno);
		printf("Digite a nota1:");
		scanf("%d",&nota1);
		printf("Digite a nota2:");
		scanf("%d",&nota2);
		printf("Digite a nota3:");
		scanf("%d",&nota3);
		printf("Digite a nota4:");
		scanf("%d",&nota4);

		media = (nota1+nota2+nota3+nota4)/4;
		
		printf("O aluno %s ", aluno);
		printf("obteve a media: %d \n", media);
		if(media>=7) {
			printf("\nParabens! Voce foi aprovado");
		}
		else {
			printf("\nVoce foi reprovado");
		}
		getch();
  return 0;
	}
