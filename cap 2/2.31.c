/*Utilice sólo las técnicas que aprendió en este capítulo para escribir un programa que calcule los cuadrados y los cubos
de los números 0 a 10, y que utilice tabuladores para desplegar la siguiente tabla de valores*/

#include <stdio.h>

int main() {
    int i = 0;
    printf("Numero\tCuadrado\tCubo\n");
    while(i <= 10) {
        printf("%d\t %d\t\t%d\n", i, i * i, i * i * i);
        i++;
    }
    return 0;
}
