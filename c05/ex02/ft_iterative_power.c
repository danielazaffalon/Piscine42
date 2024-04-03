/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:25:05 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 15:04:36 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	i;

	if (power == 0)
		count = 1;
	else if (power > 0)
	{
		count = nb;
		i = 1;
		while (i < power)
		{
			count = count * nb;
			i++;
		}
	}
	else
		count = 0;
	return (count);
}

/*int main(void)
{
	int	fac;
	int	num;
	int	pow;

	num = 2;
	pow = 4;
	fac = ft_iterative_power(num,pow);
	printf("Power of: %i is\t%i\n",num,fac);
}*/
