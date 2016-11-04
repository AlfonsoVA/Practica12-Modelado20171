#include <stdio.h>

//damos la funcion swap, recibe 2 apuntadores de ints (*a, *b)sin regresar nada(void)
void swap(int *a, int *b){
	//declaramos tmp para guardar el valor del primer int a cambiar
	int tmp;
	tmp=*a;
	*a=*b;
	//usamos la tmp para cambiar el segundo int
	*b=tmp;
}

int main()
{
	//declaramos los 2 ints para guardar lo que nos pasen
	int el_int, el_int_2;	

	//ponemos los valores iniciales
	el_int=1;
	el_int_2=2;

	//damos los valores iniciales
	printf("Valores inciales:\n %ld \n %ld \n", el_int, el_int_2);	

	//llamamos la funcion swap, esto usando los ints, para que esto se haga, similar al scanf usamos '&'			
	swap(&el_int, &el_int_2);

	//damos los valores ya cambiados, es decir debe imprimir primero el segundo valor y luego el primero
	printf("Valores finales:\n %ld \n %ld \n", el_int, el_int_2);
	return 0;
} 