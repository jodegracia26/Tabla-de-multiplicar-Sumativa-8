#include <stdio.h>

// Aplicacion que luego de introducir un valor numerico entero positivo pueda mostrar su tabla de multiplicar
int main() {
	
	int n, i; // la entrada del usuario se almacena en la variable n 
	
	printf("\nIngrese un numero positivo: ");
	scanf("%d", &n);
	
	for (i=1; i<=10; i++) { // el loop corre de i=1 a i=10. En cada interacion del loop, n * 1 es impreso.
		printf("%d * %d = %d \n", n, i, n * i);
		
	}
	return 0; 	
}