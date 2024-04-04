/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:16:33 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/04 15:27:52 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char	*name;

	name = av[0];
	while (ac != 0 && *name != '\0')
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
}
