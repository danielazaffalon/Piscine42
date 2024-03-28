/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:09:29 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 20:48:48 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_error(void)
{
	write(1, &"Value not Allowed\n", 18);
}

void	ft_printer(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
		ft_putchar('A');
	else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
		ft_putchar('C');
	else if (j == 0 || j == x - 1 || i == 0 || i == y - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		write(1, &"Value not Allowed\n", 18);
	else
	{
		i = 0;
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				ft_printer(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	rush(argv[1][0] - 48, argv[2][0] - 48);
	return(0);
}
