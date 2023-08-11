//Este código em linguagem C++ é um programa simples que calcula o perímetro de um retângulo com base nos valores dos dois lados 
//fornecidos pelo usuário e exibe o resultado na saída console. 

#include <stdio.h>
#include <locale.h> 

int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	int lado1,lado2,perimetro;
	
	printf("Digite o primeiro lado para saber o perimetro de um retangulo: \n");
	scanf("%d",&lado1);
	
	printf("Digite o segundo lado para saber o perimetro de um retangulo: \n");
	scanf("%d",&lado2);
	
	
	perimetro = (lado1 * 2) + (lado2 * 2);
	
	printf("\nO perímetro é: %d",perimetro);
	
	return 0;
}
