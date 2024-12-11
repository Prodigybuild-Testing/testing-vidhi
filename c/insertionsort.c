#include <stdio.h>

int main()
{
    int unsorted[] = {5, 6, 4, 3, 9};
    int sorted[5];
    int a = 0;
    int b = 0;
    
    do
    {
        if(unsorted[a] < unsorted[b])
        {
            sorted[a] = unsorted[a];
        }
        a++;
        b++;
    } while(a < sizeof(sorted) / sizeof(sorted[0]));
    
    return 0;
}