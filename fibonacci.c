/*
	Programa fibonacci.c
	Calcula el k-ésimo término de la conocida sucesión de Fibonacci
	@autor Paco González Moya
	@version 1.0
	@date feb 2018	
*/
#include<stdio.h>
long Fibonacci(int k);
 
int main() {
	int k=0;	//k-ésimo término a solicitar
	int x=0;	//variable auxiliar para scnaf
	long f=0;	//valor del término

	//Solicitamos el valor de k
	printf("\nTeclea un número natural[0..50]: ");
	x=scanf("%i", &k);
	x++; //evitamos el warning
	
	//Cáĺculos
	f=Fibonacci(k);

	//Resultados
	printf("\nEl término %i-ésimo de Fibonacci es: %ld\n", k, f);
	return 0;
}

/**
long Fibonacci (int k)
@param int k E/ ordinal de término k-ésimo de la serie Fibonnaci a calcular
@return k-ésimo término de la serie
Función recursiva
*/

long Fibonacci(int k) {
	long fibo=0;	//variable auxiliar para el cálculo

	if (k==0 || k==1)	//Puntos de salida de la recursividad
		fibo=(long)1;
	else
		//Caso general: cálculo recursivo
		fibo = Fibonacci(k-1) + Fibonacci(k-2);
	return fibo;	
}
