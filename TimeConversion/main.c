#include <stdio.h>
#include <stdlib.h>

//converts from 24h to 12h
// it assumes that the user will input in the correct format
int main()
{
    int hour24h = 0;
    int hour12h = 0;
    int minute = 0;
    printf("24h time: ");
    scanf("%d:%d", &hour24h, &minute);
    hour12h = hour24h % 12;
    if (hour12h == 0)
    {
        hour12h = 12;
    }
    printf("12h time: %2d:%02d", hour12h, minute);
    if (hour24h >= 12)
    {
        printf(" PM");
    }
    else
    {
        printf(" AM");
    }
    return 0;
}
