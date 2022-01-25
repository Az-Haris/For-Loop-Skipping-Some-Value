#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int b;


    for(b=1; b<=100; b++)
    {

        if((b>80)&&(b<100))
        {
            continue;
        }

        printf("\tAz Haris %d\n", b);
    }

    getch();
    return 0;
}
