/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:35:47 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 14:19:20 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	count;

	if (nb == 0)
		count = 1;
	else if (nb > 0)
	{
		count = 1;
		while (nb > 0)
		{
			count = count * nb;
			nb = nb - 1;
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

	num = 5;
	fac = ft_iterative_factorial(num);
	printf("Factorial of: %i is\t%i\n",num,fac);
}*/
