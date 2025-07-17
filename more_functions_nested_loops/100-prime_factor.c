#include <stdio.h>
int main(void)
{
	long largest = 0;
	long n = 612852475143;
	long i = 3;

	while(n % 2 == 0)
	{
		n /= 2;
		largest = 2;
	}
	while ((long)i * i <= n)
	{
		if (n % i == 0)
		{
			n /= i;
			largest = i;
		}
		else 
			i += 2;
	}
	if (n > 1)
		largest = n;
	printf("%ld\n", largest);
	return (0);
}
