/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:09:29 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/23 14:38:14 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void rush(int x_end, int y_end)
{
	int y;
	int x;

	y = 0;
	while(y < y_end)
	{
		x = 0;
		while(x < x_end)
		{
			if ((y == 0 && x == 0) || (y == y_end-1 && x == x_end-1))
				ft_putchar('A');
			else if ((y == 0 && x == x_end-1) || (y == y_end-1 && x ==0))
				ft_putchar('C');
			//else if (y == y_end-1 && x == 0)
				//ft_putchar('C');
			//else if (y == y_end-1 && x == x_end-1)
				//ft_putchar('A');
			else if (x == 0 || x == x_end-1 || y==0 || y == y_end-1)
				ft_putchar('B');
			//else if(y == 0 || y == y_end-1)
				//ft_putchar('B');
			else 
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

int main(void)
{
	rush(36,25);
	return (0); 
}
