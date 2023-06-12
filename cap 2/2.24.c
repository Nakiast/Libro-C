/*Escriba un programa que lea un entero y que determine e imprima si es par o impar. [Pista: Utilice el operador
módulo. Un número par es un múltiplo de dos. Cualquier múltiplo de 2 arroja un residuo de cero, cuando se divide
entre 2.]*/

#include <stdio.h>

int main()
{
    int num;
    printf("Introduce un numero entero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("%d es par.", num);
    }
    if(num % 2 != 0) {
        printf("%d es impar.", num);
    }
    return 0;
}