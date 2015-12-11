#include<stdio.h>
#include<ctype.h>

int main() {

int numeros[10];
int suma=0;
float media;
int mayor, menor,i;

for(i=0;i<10;i++)

{printf("Introduzca diez numeros enteros.Numero %d\n",i+1);
scanf("%d" , &numeros[i]);}
//pedimos los diez numeros que requiere el problema y que los almacene en la array


mayor=numeros[0];//para saber donde tiene que comenzar ha chequear
menor=numeros[0];

for(i=0; i<10; i++)
	{if (numeros[i]>mayor){mayor= numeros[i];
		}
	else if (numeros[i]<menor){menor = numeros[i];
		}
	}
for (i=0;i<10;i++)
	{suma = suma + numeros[i];}

media = suma/10;


printf("El mayor es: %d\n", mayor);
printf("El menor es: %d\n", menor);
printf ("La media es: %f\n", media);

return 0;
}
