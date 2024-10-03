#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char peticion[100];
	strcpy (peticion, "3/Miguel/47/1.78");
		int codigo;
		char nombre[20];
		int edad;
		float altura;
		
		
		
		char *p =strtok (peticion,"/");
		codigo = atoi(p);
		p =strtok (NULL,"/");
		strcpy (nombre,p);
			p=strtok (NULL,"/");
			edad =atoi(p);
				p=strtok (NULL,"/");
			altura =atof(p);
			
			printf("Codigo: %d, nombre:%s, edad: %d, altura: %f\n",codigo,nombre,edad,altura);
			char respuesta[100];
			if (edad>18)
			sprintf(respuesta,"%s es mayor de edad",nombre,edad);
			else
				sprintf(respuesta,"%s no es mayor de edad",nombre); 
				printf("Respuesta:%s\n", respuesta);
				
				// Verificar si el nombre es palíndromo
				int len = strlen(nombre);
				int esPalindromo = 1; // Asumimos que es un palíndromo hasta que se pruebe lo contrario
				for (int i = 0; i < len / 2; i++) {
					if (tolower(nombre[i]) != tolower(nombre[len - i - 1])) {
						esPalindromo = 0; // No es un palíndromo
						break;
					}
					if (esPalindromo)
						printf("El nombre %s es un palíndromo.\n", nombre);
					else
						printf("El nombre %s no es un palíndromo.\n", nombre);
					
					// Convertir el nombre a mayúsculas
					for (int i = 0; nombre[i]; i++) {
						nombre[i] = toupper(nombre[i]);
					}   printf("Nombre en mayúsculas: %s\n", nombre);
					
					return 0;
				}
		
}

