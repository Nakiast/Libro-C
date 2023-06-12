/*Escriba un programa que pida al usuario que introduzca dos enteros, que obtenga los números por parte del usuario,
después que imprima las palabras “es más grande”. Si los números son iguales, que imprima el mensaje
“Estos números son iguales”. Solamente utilice la forma de selección simple de la instrucción if, que
aprendió en este capítulo.*/

#include <stdio.h>

int main()
{
int num1;
int num2;

printf("Introduzca el primer numero entero:\n");
scanf("%d", &num1);
printf("Introduzca el segundo numero entero:\n");
scanf("%d", &num2);

if (num1 > num2){
    printf("%d es mas grande", num1);
}
if (num2 > num1){
    printf("%d es mas grande", num2);
}
if (num1 == num2){
    printf("Estos numeros son iguales");
}

    return 0;
}