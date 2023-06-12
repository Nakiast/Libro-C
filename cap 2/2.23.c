/*Escriba un programa que lea cinco enteros y que después imprima el número más grande y el más pequeño del grupo.
Utilice sólo técnicas de programación que haya aprendido en este capítulo.*/

#include <stdio.h>

int main() {

int num1,num2,num3,num4,num5;
int peque, grande;

printf("Ingrese 5 enteros:\n");
scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

peque=num1;

    if( peque > num2){
        peque = num2;
    }
   
    if (peque > num3){
        peque = num3;
    }

    if (peque > num4){
        peque = num4;
    }

    if (peque > num5){
        peque = num5;
    }

    printf("El numero mas pequeno es :%d \n", peque);
     

grande=num1;

    if (grande < num2){
        grande = num2;
    }

    if (grande < num3){
        grande = num3;
    }

    if (grande < num4){
        grande = num4;
    }

    if (grande < num5){
        grande = num5;
    }

    printf("El numero mas grande es :%d \n", grande);


return 0;
}