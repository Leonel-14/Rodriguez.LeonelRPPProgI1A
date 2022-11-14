#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertirCadena(char texto[]);

int main()
{
    char texto[20] = "hola";
    invertirCadena(texto);


    return 0;
}
void invertirCadena(char texto[])
{
    char invertido[20];
    int longitud;

    longitud = strlen(texto);

    int j = longitud - 1;

    for(int i = 0; i<20; i++)
        {
            invertido[i] = texto[j];
            j--;
        }
        printf("%s",invertido);
}
