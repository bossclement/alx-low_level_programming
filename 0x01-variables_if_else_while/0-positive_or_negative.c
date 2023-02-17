#include <stdlib.h>
#include <time.h>


/**
 * main - my main function
 *
 * Description: this prints all size
 * of data types of this pc
 * Return: always returns 0 (success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
    {
        printf("is positive");
    } else if (n < 0)
    {
        printf("is negative");
    } else
    {
        printf("is zero");
    }
	return (0);
}
