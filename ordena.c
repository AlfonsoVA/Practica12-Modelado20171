#include <stdio.h>

//funcion bubblesort, recibe arreglo y longitud del mismo
void bubble_sort(int *arreglo, int len){
	
	//declaramos las variables para iterar
	int i, j, k, l, tmp;

	//usamos k para disminuir la longitud del arreglo, asi ordena cada vez con menos elementos, descartando los ya ordenados
	k=len;
	printf("Arreglo inicial: \n");

	//usamos l para iterar el estado del arreglo inicial
	for(i=0; i<len; i++){
		printf("%i", arreglo[i]);	
	}
	printf("\n");

	//usamos i para disminuir k y a su vez otra iteracion para checar el orden
	for(i=0; i<len-1; i++){
		printf("ordenando: ");

		//usamos l para iterar el estado del arreglo al estarse ordenando	
		for(l=0; l<len; l++){					
			printf("%i", arreglo[l]);
		}		

		//usamos j para iterar sobre el subarreglo, esto con k para ver hasta donde ordenamos 
		for(j=0; j<k; j++){					

			//si no esta ordenado usamos tmp para guardar el valor inicial del primer elemento; similar a la funcion swap
			if(arreglo[j]>arreglo[j+1]){								
				tmp= arreglo[j];				

				//reemplazamos los valores
				arreglo[j]= arreglo[j+1];

				//usamos tmp para el segundo elemento
				arreglo[j+1]= tmp;
			}
		}
		printf("\n");
		k--;	
	}

	//usamos l para dar el arreglo ya ordenado
	printf("Arreglo ordenado: \n");
	for(i=0; i<len; i++){
		printf("%i", arreglo[i]);
	}	
}

int main()
{
	//declaramos la variable tam para la longitud del arreglo y creamos dicho arreglo
	int tam;	
	int ar[10]={9,8,7,6,5,4,3,2,1,0};		

	//calculamos la longitud del arreglo, esto se hace con sizeof a partir de una division
	tam= sizeof(ar)/sizeof(ar[0]);		

	//llamamos la funcion
	bubble_sort(ar, tam);
	return 0;
}