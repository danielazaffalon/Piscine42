/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:39:10 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/06 19:28:21 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

#define	SIZE 1024

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0' && str[count] != '\n')
		count++;
	return (count);
}

char	*ft_copy(char *src)
{
	char	*rta;
	int		len;
	int		i;

	i = 0;
	while (*src != ':' && *src != ' ')
		src++;
	len = ft_strlen(src) + 1;
	rta = (char*)malloc(len);
	while (i < len)
	{
		rta[i] = src[i];
		i++;
	}
	return (rta);
}

//return the beging of the line where the number is
char	*ft_find_value(char *origin, char *to_find, int buff_size)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	while (i < buff_size)
	{
		j = 0;
		p = &origin[i];
		while (origin[i] == to_find[j] && to_find[j] != '\0')
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
		{
			return (p);
		}
		i++;
	}
	return (p);
}

int main(int ac, char **av)
{
	int		file;
	char	buffer[SIZE];
	int		buff_size;
	char	*pos_num_buff;
	char	*word;
	char	*num = "1000000";

	if (ac == 2)
	{
		file = open(av[1],O_RDONLY);
		buff_size = read(file, &buffer, SIZE);
		printf("content: %s\nbuffer size:%i\n",buffer,buff_size);
		pos_num_buff = ft_find_value(buffer,num,buff_size);
		word = ft_copy(pos_num_buff);
		printf("%s\n",word);
	}

	close(file);
}
