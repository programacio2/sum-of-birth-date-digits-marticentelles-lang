#include <stdio.h>

int main()
{
	int dia;
	int mes;
	int a�o;

	printf("Pon tu dia de nacimiento");
	scanf_s("%d", &dia);

	printf("Pon tu mes de nacimiento");
	scanf_s("%d", &mes);

	printf("Pon tu a�o de nacimiento");
	scanf_s("%d", &a�o);

	int resultado = dia + mes + a�o;
	printf("Resultado: %d", resultado);




}
