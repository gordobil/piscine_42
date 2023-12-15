
#include <unistd.h>

int	dig_count(int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ten(int dig)
{
	int	i;

	i = 1;
	while (dig != 0)
	{
		i = i * 10;
		dig--;
	}
	return (i);
}

int	print_n(int	n)
{
	int	dig;

	dig = dig_count(n);
	while (dig > 0)
	{
		n = ((n / ten(dig)) % 10) + '0';
		write(1, &n, 1);
		write(1, "\n", 1);
		dig--;
	}
	return (0);
}

int	main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			print_n(n);
		n++;
	}
	return (0);
}
