#include <stdio.h>

#define TMAX 1000
#define MAX 1000000

int t;
int a, b, c;
int result[TMAX];

int main()
{
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a > b)
        {
            if (a > c)
            {
                if (b > c)
                {
                    result[i] = b;
                }
                else
                {
                    result[i] = c;
                }
            }
            else
            {
                result[i] = a;
            }
        }
        else
        {
            if (b > c)
            {
                if (a > c)
                {
                    result[i] = a;
                }
                else
                {
                    result[i] = c;
                }
            }
            else
            {
                result[i] = b;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}

/*
3
120 10 400
10213 312 10
10 3 450
*/