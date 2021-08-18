#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	y;

	y = nb;
	if (nb < 0)
	{
		print ('-');
		y = nb * -1;
	}
	if ((y / 10) > 0)
		ft_putnbr(y / 10);
	print (y % 10 + 48);
}
