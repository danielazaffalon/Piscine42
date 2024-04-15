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

int		ft_strlen(char *str);
char	*ft_copy_word(char *src);

char	*ft_find_value(char *buffer, char *to_find, int buff_size)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	while (i < buff_size)
	{
		j = 0;
		p = &buffer[i];
		while (buffer[i] == to_find[j] && to_find[j] != '\0')
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0' && (buffer[i] < 48 || buffer[i] > 57))
		{
			return (p);
		}
		i++;
	}
	return (0);
}

char	*ft_find_word(char *buffer, char *num, int buff_size)
{
	char	*pos_num_buff;
	char	*word;

	pos_num_buff = ft_find_value(buffer, num, buff_size);
	if (pos_num_buff != 0)
		word = ft_copy_word(pos_num_buff);
	else
		word = 0;
	return (word);
}
