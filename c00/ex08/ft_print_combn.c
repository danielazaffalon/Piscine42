/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:46:23 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/25 15:02:20 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_last(char *pt_array, int n)
{
	int	i;
	int	result;
	char	value;

	result = 1;
	i = n - 1;
	value = '9';
	while (i >= 0 && result)
	{
		result = pt_array[i] == value;
		value --;
		i --;
	}
	return (result);
}

void	calculate(char *pt_array, int start, int array_position, int n)
{
	int	i;
	int end;
	
	i = start;
	end = 10 + start - n;
	while (i <= end)
	{
		pt_array[array_position] = i + 48;
		if (array_position + 1 < n)
			calculate(pt_array, i + 1, array_position + 1, n); 
		else {
			write(1, pt_array, n);
			if (ft_is_last(pt_array, n))
				ft_putchar('\n'); 
			else
				write(1, ", ", 2);
		}
		i = i + 1;
	}
}

void ft_print_combn(int n)
{
	char num_array[10];
	calculate(num_array, 0, 0, n);
}

int	main(void)
{
	ft_print_combn(8);
}
