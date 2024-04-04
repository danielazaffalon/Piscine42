/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:48:36 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/04 17:45:28 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **av, int i, int j)
{
	char	*c;

	c = av[i];
	av[i] = av[j];
	av[j] = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	rta;	

	rta = 0;
	while ((*s1 != '\0' || *s2 != '\0') && !rta)
	{
		rta = *s1 - *s2;
		s1++;
		s2++;
	}
	return (rta);
}

void	ft_print(char *p)
{
	while (*p != '\0')
	{
		write(1, p, 1);
		p++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				ft_swap(av, i, j);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_print(av[i]);
		i++;
	}
}
