/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 04/04/2022
Escuela: Universidad del Valle de México Campus Villahermosa
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
 
    -Variables enteras, flotantes y en cadena
    -printf para mostrar mensajes y variables
    -fgets
    -scanf
    -El uso de include para las librerías
    -Librerías de la función string.h
    -Uso de condicionales
    -Ciclos
    -flush
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
#include<string.h>
//Declaraciones globales
struct alumno {
	char nombre[30];
	float promedio;
	int faltas;
};
//Prototipos
void leers(char *mensaje,char s[], int n);
float leerf(char *mensaje, float inferior, float superior);
int leerd(char *mensaje, int inferior, int superior);
//main
int main() {
	//Declaración
	struct alumno a1, a2;
	//Proceso
	leers("Introduce el nombre: ", a1.nombre,30);
	a1.promedio=leerf("Introduce el promedio: ", 0, 10);
	a1.faltas=leerd("Introduce las faltas: ", 0, 32);
	a2=a1;
	//Salida
	printf("Datos del alumno: \n");
	printf("Nombre: %s \n", a2.nombre);
	printf("Promedio: %.1f \n", a2.promedio);
	printf("Faltas: %d \n ", a2.faltas);
	return 0;
}
//Funciones
void leers(char *mensaje,char s[], int n) {
printf(mensaje);
	fgets(s,n, stdin);
	fflush(stdin); //Limpiador
	if (s[strlen(s)-1]== '\n'){
		s[strlen(s)-1]=0;
	}
}
float leerf(char *mensaje, float inferior, float superior){
	float valor;
	do{
		printf(mensaje);
		scanf("%f",&valor);
		if (valor<inferior || valor>superior){ //Condicional
			printf("\n Dato invalido!!! Debe estar entre (%.2f-%.2f). Vuelva introducirlo: \n",inferior, superior);
		}
	}while(valor<inferior || valor>superior);
	return valor;
}
int leerd(char *mensaje, int inferior, int superior){
	int valor;
	do{
		printf(mensaje);
		scanf("%d",&valor);
		if (valor<inferior || valor>superior){
			printf("Dato invalido!!! Debe estar entre (%d-%d). Vuelva introducirlo: \n",inferior, superior);
		}
	}while(valor<inferior || valor>superior);
	return valor;
}
