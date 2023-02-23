/**
 * _isupper - my function
 * @c: arguments
 * Description: the description
 * Return: hello
 */

int _isdigit(int c)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
