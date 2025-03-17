#include <stdio.h>
#include <stdlib.h>

//Functia returneaza indexul numarului cautat, src este sursa unde se cauta, id este numarul cautat
unsigned char CheckIndex(const unsigned char *src, unsigned char id)
{
    int i;
    for(i = 0; i < 15; i++)
        if(*(src + i) == id)
            return i;
    return 255;

}

const unsigned char Array[] = {4, 7, 8, 12, 14, 19, 22, 26, 29, 31, 33, 39, 40, 42, 44};
int main()
{

    printf("%d", CheckIndex(Array, 26));

    return 0;
}