/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:40:28 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 19:12:08 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	if ((num * num) > nb)
		num = 0;
	else if (0 < nb)
		num = ft_sqrt(nb--);
	return (num);
}

int main(void)
{
	int	i;
	int	rta;

	i = 49;
	rta = ft_sqrt(i);
	printf("square root of %i\tis: %i\n",i,rta);
}
