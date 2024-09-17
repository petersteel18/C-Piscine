#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letras;

	letras = 'a';
	while (letras <= 'z' )
	{
		write(1, &letras, 1);
		letras++;
	}
}
