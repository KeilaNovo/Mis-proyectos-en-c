#include<stdio.h>

int main()
{
	int numero_programa;

	printf("Introduzca el numero de programa que desea ver:\n");
	scanf("%d", &numero_programa);

	switch(numero_programa)
	{
		case 1:
			printf("El primer programa:\n");
			fopen("ejercicio_1.c","r");
			break;

		case 2:
			printf("El segundo programa:\n");
			fopen("ejercicio_2.c","r");
			break;

		case 3:
			printf("El tercer programa:\n");
			fopen("ejercicio_3.c","r");
			break;

		case 4:
			printf("El cuarto programa:\n");
			fopen("ejercicio_4.c","r");
			break;

		case 5:
			printf("El quinto programa:\n");
			fopen("ejercicio_5.c","r");
			break;

		case 6:
			printf("El sexto programa:\n");
			fopen("ejercicio_6","r");
			break;
	}
	return 0;

}
