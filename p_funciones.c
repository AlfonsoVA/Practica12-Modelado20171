#include <stdio.h>
//SPOILER: fun1 y fun2 son apuntadores a funciones... Dormammu aparece en D.S. :Y

/* Declaración de funciones */
//declaracion de metodo misterio1, regresa un int y recibe un apuntador a un metodo tipo int con un int de parametro y un int
int misterio1(int (*fun) (int), int);

//declaracion de metodo misterio1, no regresa nada y recibe un apuntador a un metodo tipo void con un int de parametro y un int
void misterio2(void (*fun) (int), int);

//declaracion de metodo cuadrado_num, regresa un int y recibe un int
int cuadrado_num(int);

//declaracion de metodo imprime_num, no regresa nada y recibe un int
void imprime_num(int);

//metodo main
int main()
{   

  //declaracion de apuntadores a metodo tipo int y tipo void, cada uno recibe un int de parametro
  int (*fun1) (int);
  void (*fun2) (int);

  //asocia los apuntadores a las funciones cuadrado e imprime
  //fun1 es tipo int al igual que el metodo cuadrado_int
  //fun2 es tipo void al igual que el metodo imprime_int  
  fun1 = &cuadrado_num;
  fun2 = &imprime_num;

  //declaracion de variable var tipo int, esta es igual al metodo misterio1
  //metodo misterio1 es tipo int igual que la variable var, en el metodo tomamos el apuntador fun1 de tipo int que recibe un int y el numero 3, 
  //tomando en cuenta los parametros al declararse el metodo misterio1

  //misterio 1 asigna a fun1 el valor de 3 al parametro, o sea calcula el cuadrado de 3, entonces var=9 
  int var = misterio1(fun1, 3);

  //llamamos al metodo misterio2, de tipo void que recibe el apuntador tipo void que recibe un int y el int var,
  //tomando en cuenta los parametros al declararse el metodo misterio2  

  //misterio2 asigna a fun2 el valor de var al parametro, como fun2 esta asociado con imprime_num, entonces da "Tada: 9"
  misterio2(fun2, var);
}

//metodo misterio1, recibe un apuntador tipo int(fun) y un int(num), regresa lo que da el apuntador a la funcion tipo int
//llama el apuntador void fun y se le da el valor de num
int misterio1(int (*fun) (int), int num)
{
    return fun(num);
}

//metodo misterio2, recibe un apuntador tipo void(fun) y un int(num), no regresa nada,
//llama el apuntador void fun y se le da el valor de num
void misterio2(void (*fun) (int), int num)
{
    fun(num);
}

//metodo cuadrado_num, recibe un int(num),
//regresa el cuadrado del int(num)
int cuadrado_num(int num)
{
    return num * num;
}

//metodo imprime_num, recibe un int(num),
//imprime "Tada num", o sea el valor del int num (._.)
void imprime_num(int num)
{
    printf("Tada: %d\n", num);
}