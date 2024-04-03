/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:40:28 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 16:52:12 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt_cal(int n, int nb)
{
	int	rta;
	int	mult;

	mult = n * n;
	if (mult < nb)
		rta = ft_sqrt_cal(++n, nb);
	else if (mult == nb)
		rta = n;
	else
		rta = 0;
	return (rta);
}

int	ft_sqrt(int nb)
{
	int	n;

	n = 0;
	if (nb <= 0)
		return (0);
	else
		return (ft_sqrt_cal(n, nb));
}

/*int main(void)
{
	int	i;
	int	rta;

	i = 49;
	rta = ft_sqrt(i);
	printf("square root of %i\tis: %i\n",i,rta);
}*/
