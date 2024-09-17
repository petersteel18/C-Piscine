#include <unistd.h>

void	ft_is_negative(int n)
{
	char	norp;

	if (n > 0)
	{
		norp = 'P';
		write(1, &norp, 1);
	}
	else
	{
		norp = 'N';
		write(1, &norp, 1);
	}
}
