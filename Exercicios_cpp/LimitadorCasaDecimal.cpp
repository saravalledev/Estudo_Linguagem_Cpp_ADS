//Este código em C lê um número decimal (do tipo float) digitado pelo usuário e o imprime com apenas três casas decimais na 
//saída do console. 

#include <stdio.h>
#include <locale.h> //bibliotéca que resolve a acentuação da String

int main(){
	
	setlocale(LC_ALL, "Portuguese"); //Chama a biblioteca de acentuação
	
	float n;
	
	printf("Entre com um numéro qualquer: \n");
	scanf("%f",&n);
	
	printf("\nO caractere entrado foi: %.3f",n);
	
	return 0;
}
