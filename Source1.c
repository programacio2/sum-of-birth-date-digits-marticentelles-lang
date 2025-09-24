#include <stdio.h>

int main()
{
	int dia;
	int mes;
	int año;

	printf("Pon tu dia de nacimiento");
	scanf_s("%d", &dia);

	printf("Pon tu mes de nacimiento");
	scanf_s("%d", &mes);

	printf("Pon tu año de nacimiento");
	scanf_s("%d", &año);

	int resultado = dia + mes + año;
	printf("Resultado: %d", resultado);




}
