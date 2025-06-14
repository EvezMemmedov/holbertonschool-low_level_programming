int _putchar(char c);

/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "_putchar";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
