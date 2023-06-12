/*Escriba un programa que pida al usuario escribir dos números, 
que obtenga los dos números por parte del usuario,
y que imprime la suma, el producto, la diferencia, 
el cociente y el residuo de los dos números.*/

#include <stdio.h>

int main()
{

int num1, num2;
int suma;
int product;
int diferencia;
int cociente;
int residuo;

printf("Digite el primer numero:\n");
scanf("%d", &num1);
printf("Digite el segundo numero:\n");
scanf("%d", &num2);

suma= num1 + num2;
product= num1 * num2;
diferencia= num1 - num2;
cociente= num1 / num2;
residuo= num1 % num2;

printf( "La suma es %d\n", suma );
printf( "El producto es %d\n", product );
printf( "La diferencia es %d\n", diferencia );
printf( "El cociente es %d\n", cociente );
printf( "El residuo es %d\n", residuo );

    return 0;
}