/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:03:51 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/03 17:39:27 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_fibonacci(int index)
{
	int	num;

	num = 0;
	if (index < 0)
		num = -1;
	else if (index == 0)
		num = 0;
	else if (index == 1)
		num = 1;
	else
		num = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (num);
}

/*int main(void)
{
	int	i;
	int	rta;

	i = 14;
	rta = ft_fibonacci(i);
	printf("element i of fibonacci is: %i\n",rta);
}*/
