/*Escriba un programa que introduzca un número de cinco dígitos, que separe el número en sus dígitos individuales
y que despliegue los dígitos separados entre sí mediante tres espacios cada uno. [Pista: Utilice combinaciones de
la división entera y el operador módulo.]*/

#include <stdio.h>

int main(){

    int num1,num2,num3,num4,num5;
    int num;

    printf("Ingrese un numero de cinco digitos:\n");
    scanf("%d", &num );
    
    num1 = num / 10000;
    num = num % 10000;
    num2 = num / 1000;
    num = num % 1000;
    num3 = num / 100;
    num = num % 100;
    num4 = num / 10;
    num5= num % 10;
    
   printf("%d\t %d\t %d\t %d\t %d\t", num1,num2,num3,num4,num5);
    return 0;
}