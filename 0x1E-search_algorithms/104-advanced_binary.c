#include <stdio.h>

/**
 * advanced_binary_recursive - Recursively search for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @low: The low index of the subarray to search
 * @high: The high index of the subarray to search
 * @value: The value to search for
 *
 * Return: Index where the value is located or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
    size_t mid = low + (high - low) / 2, i;
    if (low > high)
        return (-1);

    printf("Searching in array: ");
    for (i = low; i <= high; i++)
    {
        if (i == high)
            printf("%d\n", array[i]);
        else
            printf("%d, ", array[i]);
    }

    if (array[mid] == value)
    {
        if (mid == 0 || array[mid - 1] != value)
            return (mid);
        else
            return advanced_binary_recursive(array, low, mid, value);
    }
    else if (array[mid] < value)
    {
        return advanced_binary_recursive(array, mid + 1, high, value);
    }
    else
    {
        return advanced_binary_recursive(array, low, mid - 1, value);
    }
}

/**
 * advanced_binary - Search for a value in a sorted array using advanced binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index where the value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return advanced_binary_recursive(array, 0, size - 1, value);
}

