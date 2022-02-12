#include "./libft.h"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_is_int(av[1]) == 1)
			ft_putstr("OK\n");
		else
			ft_putstr("n est pas int\n");
	}
	return (0);
}
