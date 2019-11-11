#include <stdio.h>

int findGCD(int ARRAY[], int size, int MIN)
{
    int counter = 0;
    while (MIN > 1)
    {
        for (int i = 0; i < size; i++)
        {

            if (ARRAY[i] % MIN == 0)
            {

                counter++;
            }
            else
            {
                printf("%d is not divisible by %d\n", ARRAY[i], MIN);
            }
        }

        if (counter == size)
        {
            break;
        }

        counter = 0;
        MIN--;
    }

    return MIN;
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] <= min)
            {
                min = array[i];
            }
        }
    }

    printf("%d", findGCD(array, n, min));

    return 0;
}