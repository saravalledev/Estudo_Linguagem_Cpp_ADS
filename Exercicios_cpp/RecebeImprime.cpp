//Esse código é um programa simples em C++ para teste das funções "printf" e "scanf". Ele recebe um numero N digitado
//pelo usuário e o imprime na saída do console.

#include <stdio.h>

int main(){
	int n;
	
	printf("Entre com um numero qualquer: \n");
	
	scanf("%d",&n);
	
	printf("O caractere entrado foi: %d\n\n",n);
	
	return 0;
}
