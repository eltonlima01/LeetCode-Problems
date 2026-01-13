#include <function.h>

#include <stdio.h>
#include <stdlib.h>

type function (args)
{
    if (x < 10) {
        return 0;
    }

////////////////////////////////////////////////////////////////

    char length = 0;

    int y = x;

    while (y != 0) {
        y /= 10;

        length++;
    }

////////////////////////////////////////////////////////////////

    char* num = (char*)malloc (length * sizeof (char));

    y = x;

    for (char c = 0; y != 0; c++) {
        num [c] = y % 10;

        y /= 10;
    }

    for (char c = 0, d = length - 1; c < length; c++, d--)
    {
        if (num [c] != num [d]) {
            return 0;
        }
    }

    return 1;
}