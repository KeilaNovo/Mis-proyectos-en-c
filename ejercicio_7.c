#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numero_programa;

	printf("Introduzca el numero de programa que desea ver:\n");
	scanf("%d", &numero_programa);

	switch(numero_programa)
	{
		case 1:
			printf("El primer programa:\n");
			system("./ejercicio_1");
			break;

		case 2:
			printf("El segundo programa:\n");
			system("./ejercicio_2");
			break;

		case 3:
			printf("El tercer programa:\n");
			system("ejercicio_3");
			break;

		case 4:
			printf("El cuarto programa:\n");
			system("ejercicio_4");
			break;

		case 5:
			printf("El quinto programa:\n");
			system("./ejercicio_5);
			break;

		case 6:
			printf("El sexto programa:\n");
			system("./ejercicio_6");
			break;
	}
	return 0;

}
