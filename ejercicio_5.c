#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero_mes;
	printf("Introduce un numero de mes:");
	scanf("%d", &numero_mes);
	switch(numero_mes)
	{ 
	case 1:
		printf("El primer mes es Enero\n");
		break;
	case 2:
		printf("El segundo mes es Febrero\n");
		break;
	case 3:
		printf("El tercer mes es Marzo\n");
		break;
	case 4:
		printf("El cuarto mes es Abril\n");
		break;
	case 5:
		printf("El quinto mes es Mayo\n");
		break;
	case 6:
		printf("El sexto mes es Junio\n");
		break;
	case 7:
		printf("El septimo mes es Julio\n");
		break;
	case 8:
		printf("El octavo mes es Agosto\n");
		break;
	case 9:
		printf("El noveno mes es Septiembre\n");
		break;
	case 10:
		printf("El decimo mes es Octubre\n");
		break;
	case 11:
		printf("El undecimo mes es Noviembre\n");
		break;
	case 12:
		printf("El duodecimo mes es Diciembre\n");
		break;
	default:
		printf("Ha introducido un mes incorrecto.");
		
	}
	return 0;
	}
