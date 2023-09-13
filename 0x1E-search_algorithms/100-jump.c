#include <stdio.h>
#include <math.h>

/**
 * jump_search - Search for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of the value if found, -1 if not found or on error
 */
int jump_search(int *array, size_t size, int value)
{
    size_t jump = (size_t)sqrt(size);
    size_t prev = 0, i;

    if (array == NULL)
        return (-1);

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

        prev += jump;

        if (prev >= size)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - jump, prev);

    for (i = prev - jump; i <= (prev < size ? prev : size - 1); i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
