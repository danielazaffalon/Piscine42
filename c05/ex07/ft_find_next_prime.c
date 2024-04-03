/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:23:44 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 19:08:39 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_is_prime(int n, int nb)
{
	if (n > (nb / 2))
		return (1);
	else if (nb % n == 0)
		return (0);
	else
		return (ft_is_prime((n + 1), nb));
}

int	ft_find_next_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (2);
	else if (ft_is_prime(n, nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

/*int main(int ac, char **av)
{
	int	num;
	int	rta;

	num = atoi(av[1]);
	rta = ft_find_next_prime(num);
	printf("Next prime number is %i\n", rta);
}*/
