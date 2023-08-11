//Este código em C++ realiza operações de bitwise (bit a bit) em duas variáveis i e j, e depois imprime o resultado.

#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int i=10, j=12;
	
	int result = (i & j);
	
	printf("\n\nresult = %d" , result);
		
	return 0;
}


