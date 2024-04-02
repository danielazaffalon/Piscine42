/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:19:34 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/02 19:30:24 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_positives(int nb, char *base)
{
	int		i;
	int		base_size;
	char	array_num[32];

	base_size = 0;
	while (base[base_size] != '\0')
	{
		base_size++;
	}
	i = 31;
	while (nb > 0)
	{
		array_num[i] = base[nb % base_size];
		nb = nb / base_size;
		i--;
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
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		nbr = 0 - nbr;
		ft_putchar('-');
		ft_positives(nbr, base);
	}
	else if (nbr > 0)
		ft_positives(nbr, base);
	else
		ft_putchar('0');
}

int	main(void)
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
    ft_putnbr_base(INT_MAX, "0123456789abcdef");
    write(1, "\nINT_MAX:", 9);
    ft_putnbr_base(INT_MAX, "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba9876543210");
    write(1, "\nINT_MIN:", 9);
    ft_putnbr_base(INT_MIN, "0123456789abcdef");
    write(1, "\n-2143247366 : ", 15);
    ft_putnbr_base(INT_MIN + 4236282, "'~");
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
}
