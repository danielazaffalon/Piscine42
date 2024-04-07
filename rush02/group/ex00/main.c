/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrei2 <jferrei2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:18:32 by jferrei2          #+#    #+#             */
/*   Updated: 2024/04/07 13:50:25 by jferrei2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
char *ft_validate_input(int argc, char **argv);
char **ft_init_input(char *number);
char	***ft_init_string(char **arr, char ***arr2);

void	ft_print_array_2d(char **num)
{
	int i = 0;
	int j = 0;

	while (num[i])
	{
		j = 0;
		while (num[i][j])
		{
			write(1, &num[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	char **arr;
	char *num;
	char ***arr2;

	num = ft_validate_input(argc, argv);
	if (num == NULL)
	{
		return (0);
	}
	arr = ft_init_input(num);
	if (!arr)
	{
		return (0);
	}
	if (!ft_init_string(arr, arr2))
	{
		write(1, "Error\n", 1);
		return (0);
	}
	
	
	ft_print_array_2d(arr);

	return (0);
}
