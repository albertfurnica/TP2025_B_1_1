#include <stdio.h>
#include <stdlib.h>

//Functia returneaza indexul numarului cautat, src este sursa unde se cauta, id este numarul cautat
unsigned char CheckIndex(const unsigned char *src, unsigned char id)
{
    int left = 0, right = 14, mid;

    while(left <= right)
    {
        mid = (left + right) / 2;
        if(*(src + mid) == id)
            return mid;
        else if(*(src + mid) < id)
            left = mid + 1;
        else if(*(src + mid) > id)
            right = mid - 1;
    }
    return 255;

}

const unsigned char Array[] = {4, 7, 8, 12, 14, 19, 22, 26, 29, 31, 33, 39, 40, 42, 44};
int main()
{

    printf("%d", CheckIndex(Array, 33));

    return 0;
}