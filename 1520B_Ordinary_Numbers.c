#include <stdio.h>

// find the number of digit
int cal_digit(int n)
{
    int digit = 0;
    while (n != 0)
    {
        digit++;
        n = n / 10;
    }
    return digit;
}

// create a number like 100..digit-1 (if digit 3 number 100)
int oneZero(int digit)
{
    int number = 1;
    while (--digit)
    {
        number = number * 10;
    }
    return number;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n < 10)
        {
            printf("%d\n", n);
        }
        else if (n == 10)
        {
            printf("9\n");
        }
        else
        {
            int digit = cal_digit(n);
            int number = oneZero(digit);
            int firstdigit = n / number;
            int target = firstdigit;

            // create a targe ordinary number like 11, 111, 222 ...
            int temp = digit;
            while (--temp)
            {
                target = target * 10 + firstdigit;
            }

            // ordinary number 1-9=9, 10-100=9, 100-1000=9.... so (digit-1 *9)
            int result = (9 * (digit - 1)) + firstdigit;

            if (target <= n)
            {
                printf("%d\n", result);
            }
            else
            {
                printf("%d\n", result - 1);
            }
        }
    }

    return 0;
}


/*
 * ----------------Logic-----------
 * 1. Find the number of digit.
 * 2. For each digit have 9 ordinary number. Such 1-9 = 9, 10-100 = 9, 100-1000=9, ......
 * 3. Targe number is first_digit repeat digit time. Such 2345 = 2222,  12 = 11, 342355 = 33333
 * 4. If targe number <= n ------ result = 9*(digit -1) + firstdigit.
 * 5. else result = result -1 . Because target digit not included.
 */