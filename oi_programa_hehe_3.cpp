#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int g; //declara��o de vari�vel global

int main (void){
    int a; //declara��o de vari�vel local
    char c; 
    c = 'A'; //65

	//comando para sa�da de informa��o, imprime na tela.
	printf("Olah este eh meu primeiro comando em C!\n");
	
	printf("digite um valor para a variavel a: ");
	scanf("%d",&a);//comando para ler a variavel a

	printf("O valor de c eh: %c - %d\n",c,c);
	printf("o valor de a eh: %d\n", a);
	
	
	//espera uma entrada para fechar o programa
	system("pause");
		
}   

