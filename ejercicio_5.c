#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

	char cadena [100];
	int espacios = 0;
	int letras = 0;
	int numeros = 0;
	int longitud_cadena, i;

	printf("Introduzca un dato:\n");
	//scanf("%s", cadena)
	gets(cadena);


	longitud_cadena=strlen(cadena);

	for(i=0;i<longitud_cadena;i++)
	{	if (isspace(cadena[i])) {
			//printf("espacios\n");
			espacios++;
			continue;
		}
		else if (isalpha(cadena[i])){
			//printf("letras\n");
			letras++;
			continue;
		}
		else if (isdigit(cadena[i])){
			//printf ("numeros\n");
			numeros++;
			continue;
		}	
	}
	printf ("El numero de espacioss es: %d\n", espacios);
	printf ("El numero de numeros es:%d\n", numeros);
	printf ("El numero de letras es: %d\n", letras);
	printf ("La largura de la cadena es:%d\n", longitud_cadena);


return 0;
}
