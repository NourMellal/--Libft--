#include <stdio.h>
#include <string.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	recursive_help(long res, int div, char *base)
{
	if ((res / div) > 0)
		recursive_help(res / div, div, base);
	ft_putchar(base[res % div]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			lenbase;
	long		res;

	lenbase = base_check(base);
	if (!lenbase)
		return ;
	res = nbr;
	if (res < 0)
	{
		res = -res;
		ft_putchar('-');
	}
	recursive_help(res, lenbase, base);
}

int main()
{
	int a;

	memset(&a, 0, 4);
	ft_putnbr_base(a, "01");
}
