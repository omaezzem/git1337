#include <unistd.h>
void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_strlen (char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

int valid(char *str)
{
	int i = 0;;
	int j;
	int len = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (len < 2 || str[0] == '\0')
			return 0;
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' || str[i] == '+' || str[i] == '-')
		{
			return 0;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (j <= len)
		{
			if (str[i] == str[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int check = valid(base);
	int len = ft_strlen(base);
	long nb;

	nb = nbr;
	if (check == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if(nb < len)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= len)
			ft_putnbr_base(nb / 10, base);
	       		ft_putnbr_base(nb % 10, base);
	}
}

int main()
{
	ft_putnbr_base(10, "01");
}
