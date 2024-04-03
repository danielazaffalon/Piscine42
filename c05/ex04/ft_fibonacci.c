/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:03:51 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 15:13:27 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	count;

	if (power == 0)
		count = 1;
	else if (power > 0)
		count = nb * ft_recursive_power(nb, power - 1);
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
	fac = ft_recursive_power(num,pow);
	printf("Power of: %i is\t%i\n",num,fac);
}*/
