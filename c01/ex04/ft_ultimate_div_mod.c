/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:50:27 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/25 23:56:09 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	val1;
	int	val2;
	int *a;
	int *b;

	a = &val1;
	b = &val2;

	val1 = 24;
	val2 = 7;

	ft_ultimate_div_mod(a,b);

	printf("div: %i, mod: %i\n", val1, val2);
}
