#include<stdio.h>
#include<stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int celsius;
	int fahrenheit;
	

	printf("Introduzca un numero:");
	scanf("%d",&celsius);

	//Si quisieramos repetir, realizariamos un bucle for
	fahrenheit = celsius + 32;

	printf ("Los grados Fahrenheit son: %d y los grados Celsius son : %d\n", fahrenheit, celsius);
	
			
	
	return 0;
}
