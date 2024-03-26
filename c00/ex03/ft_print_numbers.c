/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:49:25 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 15:33:58 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	num;

	num = 0;
	while (num <= 9)
	{
		ft_putchar(num + 48);
		num++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}*/
