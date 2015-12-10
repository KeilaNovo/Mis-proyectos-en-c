#include<stdio.h>
#include<string.h>

int main()
{
	char cadena[100];
	int espacios= 0, letras = 0, numeros= 0;
	int longuitud_cadena, i;


	printf("Introduzca numero/palabra:%s", cadena);
	scanf("%s", &cadena);

printf ("La longuitud de la cadena es:");
strlen (cadena);

	while (cadena[i] != "\0");
	{
		if (cadena[i] == " ") espacios++;
		if (cadena[i] == "abcdefghijklmnñopqrstuvwyzABCDEFGHIJKLMNÑOPKRSTUVWYZ") letras++;
		if (cadena [i] == "0123456789") numeros++;
		i++;
	}

	printf ("En la cadena \"%s\" hay:\n", cadena);
	printf ("%i espacios\n", espacios);
	printf ("%i letras\n", letras);	
	printf ("%i numeros\n", numeros);
	



	return 0;
}