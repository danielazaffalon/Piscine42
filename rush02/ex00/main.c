/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:39:10 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/07 02:54:43 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#define SIZE 1024

int	ft_get_dictionary(char *path, char *buffer);
int	ft_strlen(char *str);
int	ft_print_number_text(char *num, int num_size, char *dic, int dic_size);

int	main(int ac, char **av)
{
	char	dictionary[SIZE];
	char	*number;
	int		dic_size;
	int		print_result;
	int		num_size;

	if (ac != 3 && ac != 2)
		return (0);
	if (ac == 3)
	{
		dic_size = ft_get_dictionary(av[1], dictionary);
		number = av[2];
	}
	else
	{
		dic_size = ft_get_dictionary("numbers.dict", dictionary);
		number = av[1];
	}
	num_size = ft_strlen(number);
	print_result = ft_print_number_text(number, num_size, dictionary, dic_size);
	if (!print_result)
		write(1, "Dict Error\n", 11);
}
