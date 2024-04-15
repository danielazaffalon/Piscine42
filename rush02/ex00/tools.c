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

char	*ft_copy_word(char *src)
{
	char	*rta;
	char	*src_c;
	int		len;
	int		i;

	i = 0;
	while (*src != ':')
		src++;
	src++;
	while (*src < 33)
		src++;
	src_c = src;
	while (*src_c != '\n')
		src_c++;
	while (*src_c < 32)
		src_c--;
	len = src_c - src + 2;
	rta = (char *)malloc(len);
	while (i < (len - 1) && src[i] != '\n')
	{
		rta[i] = src[i];
		i++;
	}
	rta[i] = '\0';
	return (rta);
}

char	*ft_strcpy(char *src, int len)
{
	char	*rta;
	int		i;

	rta = (char *)malloc(len + 1);
	i = 0;
	while (src[i] != '\0' && i < len)
	{
		rta[i] = src[i];
		i++;
	}
	rta[i] = '\0';
	return (rta);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0' && str[count] != '\n')
		count++;
	return (count);
}

void	ft_print_word(char *word)
{
	while (*word != '\0')
		write(1, word++, 1);
}
