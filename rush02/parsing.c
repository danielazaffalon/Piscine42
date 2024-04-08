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

#define	SIZE 1024

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0' && str[count] != '\n')
		count++;
	return (count);
}

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
	rta = (char*)malloc(len);
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
	char *rta;
	int i;

	rta = (char*)malloc(len + 1);
	i = 0;
	while(src[i] != '\0' && i < len)
	{
		rta[i] = src[i];
		i++;
	}
	rta[i] = '\0';
	return rta;
}

char	*ft_wordcat(char *str1, char *str2, char c)
{
	char	*rta;
	int		len1;
	int		len2;
	int		i;
	int		j;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	rta = (char*)malloc(len1 + len2 + 2);
	i = 0;
	while (i < len1 && str1[i] != '\0')
	{
		rta[i] = str1[i];
		i++;
	}
	rta[i] = c;
	i++;
	j = 0;
	while (j < len2 && str2[j] != '\0')
	{
		rta[i] = str2[j];
		i++;
		j++;
	}
	rta[i] = '\0';
	free(str1);
	free(str2);
	return (rta);
}

//return the beging of the line where the number is
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

	pos_num_buff = ft_find_value(buffer,num,buff_size);
	if (pos_num_buff != 0)
		word = ft_copy_word(pos_num_buff);
	else
		word = 0;
	return (word);
}

void	ft_print_word(char *word)
{
	while(*word != '\0')
		write(1, word++, 1);
}

//Esta es la funcion recursiva para imprimir de a tres. Retorna 1 si todo va bien, o 0 si falla algo.
char	*ft_print_number_text(char *num, int last_pos, char* dic, int dic_size)
{
	char	*current;
	char	*word;
	char	*temp;
	int		i;
	
	current = num + last_pos;
	i = 0;
	while (current[i] != '\0')
		i++;
	if (i % 3 == 1) //digits
	{
		temp = 0;
		if (*(current - 1) == '1' && (current - 1) >= num)
		{
			temp = ft_strcpy(current - 1, 2);
			last_pos--;
		}
		else if (*current != '0')
			temp = t_strcpy(current, 1);
		else
			return ft_print_number_text(num, last_pos - 1, dic, dic_size); 
		word = ft_find_word(dic,temp,dic_size);
		free(temp);
		if (!word)
			return (0);
		else
		{
			temp = ft_print_number_text(num, last_pos - 1, dic, dic_size);
			return ft_wordcat(temp, word, '-');
		}
	}
	else if (i % 3 == 2)
	{
		
	} //tens
	else if (i % 3++ == 0) //hundreds

	word = ft_find_word(dic,num,dic_size);
	if (word)
	{
		ft_print_word(word);
		return (num_size);
	}
	return (0);
}

int	ft_get_dictionary(char *path, char *buffer)
{
	int		file;
	int		buff_size;

	file = open(path, O_RDONLY);
	buff_size = read(file, buffer, SIZE);
	//printf("content: %s\nbuffer size:%i\n",buffer,buff_size);
	close(file);
	return buff_size;
}

int	main(int ac, char **av)
{
	char	dictionary[SIZE];
	char	*number;
	int		dictionary_size;
	int 	print_result;
	int		last_pos;

	if (ac != 3 && ac != 2)
		return 0;
	
	if (ac == 3)
	{
		dictionary_size = ft_get_dictionary(av[1], dictionary);
		number = av[2];
	}
	else
	{
		dictionary_size = ft_get_dictionary("numbers.dict", dictionary);
		number = av[1];
	}
	last_pos = ft_strlen(number) - 1;
	print_result = ft_print_number_text(number, last_pos, dictionary, dictionary_size);
	if(!print_result)
		write(1, "Dict Error\n", 11);
}
