/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:30:32 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/04 16:46:31 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

	i = 1;
	while (i < ac)
	{
		ft_print(av[i]);
		i++;
	}
}
