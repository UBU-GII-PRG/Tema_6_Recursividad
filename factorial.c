/*
	Programa factorial.c
	Calcula el factorial de un número N
	@autor Paco González Moya
	@version 1.0
	@date feb 2018	
*/
#include<stdio.h>
unsigned long Factorial(int n);
 
int main() {
	int n=0;	//n-ésimo valor cuyo factorial se desea
	int x=0;	//variable auxiliar para scnaf
	unsigned long f=0;	//valor del factorial

	//Solicitamos el valor de k
	printf("\nTeclea un número natural[0..50]: ");
	x=scanf("%i", &n);
	x++; //evitamos el warning
	
	//Cáĺculos
	f=Factorial(n);

	//Resultados
	printf("\nEl factorial de %d es : %lu\n", n, f);
	return 0;
}

/**
unsigned long Factorial (int n)
@param int n E/ ordinal de término cuyo factorial se desea calcular
@return el valor del factorial
Función recursiva
*/

unsigned long Factorial(int n) {
	unsigned long fact=0;	//variable auxiliar para el cálculo

	if (n==0 || n==1)	//Puntos de salida de la recursividad
		fact=(unsigned long)1;
	else
		//Caso general: cálculo recursivo
		fact = (unsigned long)n * Factorial(n-1);
	return fact;	
}
