/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 00:11:55 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 00:37:45 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_val(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	*p1;
	int	*p2;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		p1 = tab + i;
		while (j < size)
		{
			p2 = tab + j;
			if (*p2 < *p1)
				ft_swap_val(p1, p2);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	a[10] = {5,6,8,3,6,2,2,1,9,0};
	//int *p = &a;
	int size = 10;

	ft_sort_int_tab(a, size);
}*/
