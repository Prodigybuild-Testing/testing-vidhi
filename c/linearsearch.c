#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linsearch(const char **yarr, const char *val, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(strcmp(yarr[i], val) == 0)
        {
            return 0;
        }    
    }
    return 1;
}

int main()
{
    const char *yarr[] = {"Shluck much", "much Shluck"};
    const char *val = "Shluck Much";
    int size = sizeof(yarr) / sizeof(yarr[0]);
    linsearch(yarr, val, size);
    return 0;
}