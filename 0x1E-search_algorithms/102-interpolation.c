#include <stdio.h>

/**
 * interpolation_search - Search for a value in a sorted array using Interpolation Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of the value if found, -1 if not found or on error
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, pos;
    if (array == NULL)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (low == high)
        {
            if (array[low] == value)
                return (low);
            return (-1);
        }

        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    printf("Value checked array[%lu] is out of range\n", low);
    return (-1);
}

