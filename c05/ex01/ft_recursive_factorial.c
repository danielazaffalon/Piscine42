/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:41:30 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 13:42:10 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		nb = 1;
	else if (nb > 0)
		nb = nb * ft_recursive_factorial(nb - 1);
	else
		nb = 0;
	return (nb);
}

/*int main(void)
{
	int	fac;
	int	num;

	num = 5;
	fac = ft_recursive_factorial(num);
	printf("Factorial of: %i is\t%i\n",num,fac);
}*/
