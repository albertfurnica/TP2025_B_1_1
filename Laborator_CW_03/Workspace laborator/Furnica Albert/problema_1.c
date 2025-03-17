/*
Se dă o mulțime de numere naturale cu valori de la 0 la 1000. Se citesc de la intrare diferite valori în intervalul [0,1000], 
să se utilizeze un vector de octeți de dimensiune cât mai mică pentru memorarea elementelor mulțimii.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short *Array = NULL;
    int NumberElements = 0;

    do
    {
        printf("Introduceti elementul cu numarul %d : ", NumberElements + 1);

        Array = (unsigned short*)realloc(Array, (NumberElements + 1) * sizeof(unsigned short));
        if(Array == NULL)
        {
            printf("Eroare la alocarea memoriei!");
            free(Array);    
            return 1;
        }

        scanf("%hu", (Array + NumberElements));
        if(*(Array + NumberElements) > 1000)
            break;

        NumberElements++;
    } while(1);
    
    
    printf("Elementele introduse sunt : \n");
    for(int index = 0; index < NumberElements; index++)
        printf("%hu ", *(Array + index));

    free(Array);

    return 0;
}