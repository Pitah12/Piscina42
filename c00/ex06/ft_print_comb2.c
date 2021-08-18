#include <unistd.h>

void	print(int print)
{
	write (1, &print, 1);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 00;
	y = 00;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			print (x / 10 + '0');
			print (x % 10 + '0');
			print (' ');
			print (y / 10 + '0');
			print (y % 10 + '0');
			if (x != 98)
				write (1, ", ", 2);
			y++;
		}
		x++;
	}
}
