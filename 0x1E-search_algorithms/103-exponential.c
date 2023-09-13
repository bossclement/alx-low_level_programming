#include <stdio.h>

/**
 * exponential_search - Search for a value in a sorted array using Exponential Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index of the value if found, -1 if not found or on error
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    if (array[0] == value)
    {
        printf("Value checked array[0] = [%d]\n", array[0]);
        return (0);
    }

    size_t bound = 1;
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, (bound < size - 1) ? bound : size - 1);

    size_t low = bound / 2, high = (bound < size - 1) ? bound : size - 1;

    while (low <= high)
    {
        size_t mid = (low + high) / 2;

        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++)
        {
            if (i == high)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        if (array[mid] == value)
        {
            printf("Found %d at index: %lu\n", value, mid);
            return (mid);
        }

        if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return (-1);
}
