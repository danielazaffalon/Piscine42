/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:27:59 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 15:35:45 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int n)
{
	int	d;
	int	u;

	d = n / 10;
	u = n % 10;
	ft_putchar(d + 48);
	ft_putchar(u + 48);
}

void	ft_print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_numbers(i);
			ft_putchar(' ');
			ft_print_numbers(j);
			if (i < 98)
				ft_print_separator();
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
