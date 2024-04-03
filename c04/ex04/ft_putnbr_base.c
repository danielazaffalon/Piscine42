/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:19:34 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/02 23:43:51 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_valid(char *base)
{
	int	base_size;
	int	bi;
	int	rta;

	base_size = 0;
	rta = 0;
	while (base[base_size] != '\0' && rta == 0)
	{
		bi = base_size + 1;
		if (base[base_size] == '+' || base[base_size] == '-')
			rta = -1;
		while (base[bi] != '\0' && rta == 0)
		{
			if (base[base_size] == base[bi])
				rta = -1;
			bi++;
		}
		base_size++;
	}
	if (base_size < 2 || rta == -1)
		rta = -1;
	else
		rta = base_size;
	return (rta);
}

void	ft_positives(unsigned int nb, char *base)
{
	int		i;
	char	array_num[32];
	int		base_size;

	i = 31;
	base_size = base_valid(base);
	if (base_size == -1)
		array_num[i] = '\0';
	else
	{
		while (nb > 0)
		{
			array_num[i] = base[nb % base_size];
			nb = nb / base_size;
			i--;
		}
	}
	i = i + 1;
	while (i < 32)
	{
		ft_putchar(array_num[i]);
		i = i + 1;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_ext;

	if (nbr < 0)
	{
		nbr_ext = 0 - nbr;
		ft_putchar('-');
		ft_positives(nbr_ext, base);
	}
	else if (nbr > 0)
		ft_positives(nbr, base);
	else
		ft_putchar('0');
}

/*int	main(void)
{
	ft_putnbr_base(-2147483648,"0123456789");
	ft_putchar('\n');
	ft_putnbr_base(2147483647,"0123456789");
	ft_putchar('\n');
	ft_putnbr_base(254,"01");
	ft_putchar('\n');
	ft_putnbr_base(254,"0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(254,"poniguay");
	ft_putchar('\n');
	ft_putnbr_base(-254,"0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-254,"01");
	ft_putchar('\n');
	ft_putnbr_base(-254,"poniguay");
	ft_putchar('\n');
	ft_putnbr_base(-254,"0123456789ABCDEF");
	ft_putchar('\n');
	ft_putchar('\n');    
	write(1, "42:", 3);
    ft_putnbr_base(42, "0123456789");
    write(1, "\n2a:", 4);
    ft_putnbr_base(42, "0123456789abcdef");
    write(1, "\n-2a:", 5);
    ft_putnbr_base(-42, "0123456789abcdef");
    write(1, "\n0:", 3);
    ft_putnbr_base(0, "0123456789abcdef");
    write(1, "\nINT_MAX:", 9);
    ft_putnbr_base(2147483647, "0123456789abcdef");
    write(1, "\nINT_MAX:", 9);
    ft_putnbr_base(2147483647, "ZYXWVUTSRQPONMLKJIHGFEDCBA
zyxwvutsrqponmlkjihgfedcba9876543210");
    write(1, "\nINT_MIN:", 9);
    ft_putnbr_base(-2147483648, "0123456789abcdef");
    write(1, "\n-2143247366 : ", 15);
    ft_putnbr_base(-2147483648 + 4236282, "'~");
    write(1, "\n-1:", 4);
    ft_putnbr_base(-1, "0123456789abcdef");
    write(1, "\n:", 2);
    ft_putnbr_base(42, "");
    write(1, "\n:", 2);
    ft_putnbr_base(42, "0");
    write(1, "\n:", 2);
    ft_putnbr_base(42, "+-0123456789abcdef");
    write(1, "\n:", 2);
    ft_putnbr_base(42, "\v0123456789abcdef");
	write(1, "\n", 2);
}*/
