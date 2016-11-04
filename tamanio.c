#include <stdio.h>
int main()
{
	short el_short;
	int el_int, size;
	unsigned int el_unsigned_int;	
	int *el_int_apuntado;
	el_int_apuntado=&el_int;
	char el_char;
	float el_float;
	double el_double;

	//Imprimimos el tamanio de los tipos, usamos %ld para long int
	size=sizeof(el_short);
	printf("El tipo short tiene tamanio:_____%i\n ",size);
	size=sizeof(el_int);
	printf("El tipo int tiene tamanio:_____%i\n  ",size);
	size=sizeof(el_unsigned_int);
	printf("El tipo unsigned int tiene tamanio:_____%i\n   ",size);
	size=sizeof(el_int_apuntado);
	printf("El tipo apuntador a int tiene tamanio:_____%i\n    ",size);
	size=sizeof(el_char);
	printf("El tipo char tiene tamanio:_____%i\n     ",size);
	size=sizeof(el_float);
	printf("El tipo float tiene tamanio:_____%i\n      ",size);
	size=sizeof(el_double);
	printf("El tipo double tiene tamanio:_____%i\n       ",size);
	return 0;
} 
