/*Escriba un programa que lea dos enteros y que determine e imprima si el primero es múltiplo del segundo. [Pista:
Utilice el operador módulo.]*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Introduce dos enteros: ");
    scanf("%d %d", &num1, &num2);

    if(num2 != 0)
    {
        if(num1 % num2 == 0)
            printf("%d es múltiplo de %d\n", num1, num2);
        if(num1 % num2 != 0)
            printf("%d no es múltiplo de %d\n", num1, num2);
    }
    if(num2 == 0)
        printf("No se puede dividir por cero.\n");

    return 0;
}