//Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além de identificar a mais 
//velha e a posição em que ela se encontra no vetor. A idade mais velha pode aparecer em mais de uma posição.
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int leValidaIdade(int i);
void leValidaPessoaMaisVelha ( int idade[], int i);
int main (){
	
	int idade[MAX];
	int i, j, continuar, qtde;
	int contador=0, posicaoPessoaMaisVelha[100];
	int mediaIdades=0, soma=0;
	
	for(i=0; i<MAX; i++){
		
		idade[i]= leValidaIdade(i);
	
		printf("-----------");
		printf("\nPressione 'S' para informar mais idade.\n");
		continuar=getch();	
		continuar=toupper(continuar);
		if(continuar!='S'){
			break;
		}
	}
	qtde=i;	
	
	for(i=0; i<=qtde; i++){
		printf("A idade da %i%c pessoa: %i \n", i+1, 167, idade[i]);
	}
	
	for(i=0; i<qtde; i++){
		soma+=idade[i];
		mediaIdades = soma/qtde;
	}
	printf("A media das idades das pessoas %c de %i anos./n", 130, mediaIdades);
	
	leValidaPessoaMaisVelha (idade,i);
	
	for(j=0; j<=i; j++){
		idade[j]==idade[i];
		posicaoPessoaMaisVelha[contador] == j;
		printf("Posi%c%co(%ces) da pessoa mais velha: %i .\n", 135, 198, posicaoPessoaMaisVelha);
		
	}
	contador++;
	
	printf("Quantidade encontrada da idade mais velha: %i .\n", contador);
	
	return 0;
}
int leValidaIdade(int i){
	int idade;
	do{
		printf("Informe a %i%c idade: ", i+1, 167);
		scanf("%i", &idade);
		if(idade<0){
			puts("Idade invalida!\n");
		}
	}while(idade<0);
	return idade;
}

void leValidaPessoaMaisVelha ( int idade[], int i){
	int ind;
	int maiorIdade=idade[0];
	for(ind=1; ind<i; ind++){
		if(maiorIdade<idade[ind]){
			maiorIdade=idade[ind];
		}
	}
	printf("A pessoa mais velha tem a idade de %i anos. \n", maiorIdade);
	
}
