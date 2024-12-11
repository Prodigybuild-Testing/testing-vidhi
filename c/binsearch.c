#include <stdio.h>

int binsearch(const int *yarr, int size, int element)
{
    int left = 0;
    int right = size - 1;
    int mid;
    
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        
        if (yarr[mid] == element)
        {
            return mid;
        }
        else if (yarr[mid] < element)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    
    return -1;
}

int main(int argc, char *argv[])
{
    int yarr[] = {3, 9, 4, 8, 7, 6, 1, 2, 0, 10};
    int size = sizeof(yarr) / sizeof(yarr[0]);
    int element = atoi(argv[1]);
    
    int result = binsearch(yarr, size, element);
    
    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }
    
    return 0;
}