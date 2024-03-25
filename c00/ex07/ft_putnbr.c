#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_positives(int nb)
{
	int i;
	char array_num[10];

	i = 9;
	while(nb > 0 && i >= 0)
	{
		array_num[i] = nb % 10;
		array_num[i] = array_num[i] + 48;
		nb = nb / 10;
		i = i - 1;	
	}
	i = i + 1;
	while(i < 10)
	{	
		ft_putchar(array_num[i]);
		i = i + 1;
	}
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648) write(1, "-2147483648", 11);
	else if (nb < 0) 
	{
		nb = 0 - nb;
		ft_putchar('-');
		ft_positives(nb); 
	}
	else if (nb > 0) ft_positives(nb);
	else ft_putchar('0');
}

int main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
}
