/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:53:19 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 19:13:38 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap_val(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	*p1;
	int	*p2;

	i = 0;
	end = size / 2;
	while (i < end)
	{
		p1 = tab + i;
		p2 = tab + (size - 1) - i ;
		ft_swap_val(p1, p2);
		i++;
	}
}

/*int	main(void)
{
	int	a[10] = {0,1,2,3,4,5,6,7,8,9};
	//int *p = &a;
	int size = 10;

	ft_rev_int_tab(a, size);
	
	int i = 0;
	while(i < size)
	{
		int n = a[i] + 48;
		write(1, &n, 1);
		i++;
	}
}*/
