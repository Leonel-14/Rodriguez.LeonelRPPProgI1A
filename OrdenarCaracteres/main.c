#include <stdio.h>
#include <stdlib.h>
void ordenarCaracteres(char texto[]);
int main()
{
    char texto[20] = "hola";
    ordenarCaracteres(texto);
    return 0;
}
void ordenarCaracteres(char texto[])
{
    char aux;
     for(int i = 0; i < 20 - 1; i++)
        {
            for(int j = i+1; j < 20; j++)
            {
                if(texto[i] < texto[j])
                {
                    aux = texto[i];
                    texto[i] = texto[j];
                    texto[j] = aux;
                }
            }
        }

    printf("%s",texto);
}
