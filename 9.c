/*
 * Given an integer x, return true if x is a , and false otherwise.
 * 
 * 
 * 
 * Example 1:
 * 
 * Input: x = 121
 * Output: true
 * Explanation: 121 reads as 121 from left to right and from right to left.
 * 
 * Example 2:
 * 
 * Input: x = -121
 * Output: false
 * Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
 * 
 * Example 3:
 * 
 * Input: x = 10
 * Output: false
 * Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
*/

#include <math.h>

char isPalindrome (int x)
{
    if (x < 0) {
        return 0;
    }
    else if (x < 10) {
        return 1;
    }

    // *

    int y = x;
    char length = 0;

    do {
        y /= 10;

        length++;
    }
    while (y != 0);

    // *

    while (length > 1)
    {
        long l = (long)pow (10, length - 1);

        if (l == 0) {
            return 1;
        }

        if ((x / l) != (x % 10)) {
            return 0;
        }

        x %= l;
        x /= 10;

        length -= 2;
    }

    return 1;
}