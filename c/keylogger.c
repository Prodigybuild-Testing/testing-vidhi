#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int keylog()
{
    FILE * fPtr;
    fPtr = fopen("keylogger.txt", "w+");

    char a = getchar();
    
    if(a != '\0')
        fprintf(fPtr, "%c", a);
    
    time_t now = time(NULL);
    struct tm tm_struct;
    localtime_r(&now, &tm_struct);
    int hour = tm_struct.tm_hour;
    
    if(hour == 24) {
        if (fPtr) {
            fclose(fPtr);
        }
    } else if (!fPtr) {
        printf("Could not open file!\n");
        return 1;
    } else {
        fclose(fPtr); // Added fclose() to close the file if hour is not 24
    }
    
    return 0;
}

int main()
{
    keylog();
    return 0;
}