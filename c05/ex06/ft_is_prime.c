/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:54:55 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 18:17:49 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_prime(int n, int nb)
{
	if (n > (nb / 2))
		return (1);
	else if (nb % n == 0)
		return (0);
	else
		return (ft_prime(++n, nb));
}

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	else
		return (ft_prime(n, nb));
}

/*int main(int ac, char **av)
{
	int	num;
	int	rta;

	num = atoi(av[1]);
	rta = ft_is_prime(num);
	printf("Number %i is %s\n", num, (rta ? "prime" : "NOT prime"));
}*/
