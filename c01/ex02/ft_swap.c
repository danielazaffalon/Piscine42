/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:25:09 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/25 23:36:18 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;
	int *c;
	int *d;

	a = 3;
	b = 6;
	c = &a;
	d = &b;
	ft_swap(c,d);
	//printf("a: %i, b: %i, c: %i, d: %i\n", *a, *b, c, d);	
}*/
