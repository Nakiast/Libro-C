/*Escriba un programa que introduzca tres diferentes enteros desde el teclado, después que imprima la suma, el
promedio, el producto, el número más pequeño y el más grande de éstos. Solamente utilice la forma de selección
simple de la instrucción if, que aprendió en este capítulo.*/

#include <stdio.h>

int main()
{

int x,y,e,suma,grande,peque,promedio,producto;



    printf("Escriba tres enteros diferentes\n");
    scanf("%d %d %d", &x, &y, &e);

    suma=x+y+e;
    producto=x*y*e;
    promedio=suma/3;
    

   
    printf("La suma es :%d\n",suma);
    printf("El promedio es :%d\n",promedio);
    printf("El producto es :%d\n",producto);

     peque=x;

    if( peque > y){
        peque = y;
    }
   
    if (peque > e){
        peque = e;
    }
     
     printf("El numero peque es :%d \n", peque);
     

    grande=x;

    if (grande < y){
        grande = y;

    }
    if (grande < e){
        grande = e;
    }

    printf("El numero grande es :%d \n", grande);
    return 0;
}