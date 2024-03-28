/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:16:43 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/28 15:57:56 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
int	ft_atoi(char *str)
{
	int	neg;
	int	num;

	neg = 0;
	num = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	if (neg % 2 == 0)
		neg = 1;
	else
		neg = -1;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	num = num * neg;
	return (num);
}

/*int	main(void)
{
	char *str = "   ---+--+1234ab567";
	//char *str = "  2147483648";
	int rta = ft_atoi(str);
	int rta2 = atoi(str);
	printf("%i\natoi: %i\n",rta,rta2);
}*/
