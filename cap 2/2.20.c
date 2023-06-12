/*Escriba un programa que lea el radio de un círculo y que imprima el diámetro, la circunferencia y el área de ese
círculo. Utilice el valor constante de 3.14159 para (pi). Realice cada uno de estos cálculos dentro de instrucción(es)
printf, y utilice el especificador de conversión %f.*/

#include <stdio.h>
#define PI 3.14159

int main() 
{
    float radio, diametro, circunferencia, area;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    diametro = 2 * radio;
    circunferencia = 2 * PI * radio;
    area = PI * radio * radio;

    printf("El diametro es: %f\n", diametro);
    printf("La circunferencia es: %f\n", circunferencia);
    printf("El area es: %f\n", area);

    return 0;
}