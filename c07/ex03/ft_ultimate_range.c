/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:24:05 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/11 23:37:15 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int i;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(int)*size);
	i = 0;
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}

int main(int ac, char **av)
{
	int max;
	int min;
	int	size;
	int *range;
	int i;

	if (ac == 3)
	{
		min = atoi(av[1]);
		max = atoi(av[2]);
		size = ft_ultimate_range(&range, min, max);
		printf("Size: %i\n",size);
		i = 0;
		while (i < max - min)
			printf("%i,",range[i++]);
	}
	return (0);
}
