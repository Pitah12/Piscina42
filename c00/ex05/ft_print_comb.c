#include <unistd.h>

void	ft_print_comb(void)
{
	char	tabla[3];
	char	comas[2];

	comas[0] = ',';
	comas[1] = ' ';
	tabla[0] = '0';
	tabla[2] = '2';
	while (tabla[0] <= '7')
	{
		tabla[1] = tabla[0] + 1;
		while (tabla[1] <= '8')
		{
			tabla[2] = tabla[1] + 1;
			while (tabla[2] <= '9')
			{
				write (1, &tabla, 3);
				tabla[2]++;
				if (tabla[0] != '7')
					write (1, &comas, 2);
			}
			tabla[1]++;
		}
		tabla[0]++;
	}
}
