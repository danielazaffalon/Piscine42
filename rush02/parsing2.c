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

	if (str1 == 0)
		return(str2);
	if (str2 == 0)
		return(str1);
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
int	ft_print_number_text(char *num, int num_size, char* dic, int dic_size)
{
	char	*word;
	char	*str1;
	char	*str2;
	int		i;
	int		j;
	int		mod;

	i = 0;
	word = 0;
	while (i < num_size)
	{
		if (num[i] != '0')
		{
			mod = (num_size - i) % 3;
			if (mod == 2) //tens
			{
				str1 = ft_strcpy(num + i, 2);
				if (num[i] == '1')
				{
					str2 = ft_find_word(dic,str1,dic_size);
					free(str1);
					word = ft_wordcat(word,str2,' ');
					i++;
					if (num_size - i - 1 > 0)
					{
						j = 1;
						str1 = (char*)malloc(num_size - i + 1);
						str1[0] = '1';
						while (j < num_size - i)
							str1[j++] = '0';
						str1[j] = '\0';
						str2 = ft_find_word(dic,str1,dic_size);
						word = ft_wordcat(word,str2,' ');
					}
				}
				else
				{
					str1[1] = '0';
					str2 = ft_find_word(dic,str1,dic_size);
					free(str1);
					word = ft_wordcat(word,str2,' ');	
				}
			}
			else if (mod == 1) //digits
			{
				str1 = ft_strcpy(num + i, 1);
				str2 = ft_find_word(dic,str1,dic_size);
				word = ft_wordcat(word,str2,' ');
				free(str1);
				if (num_size - i - 1 > 0)
				{
					j = 1;
					str1 = (char*)malloc(num_size - i + 1);
					str1[0] = '1';
					while (j < num_size - i)
						str1[j++] = '0';
					str1[j] = '\0';
					str2 = ft_find_word(dic,str1,dic_size);
					word = ft_wordcat(word,str2,' ');
				}
			}
			else //hundreds
			{
				str1 = ft_strcpy(num + i, 1);
				str2 = ft_find_word(dic,str1,dic_size);
				free(str1);
				str1 = ft_find_word(dic,"100",dic_size);
				word = ft_wordcat(word,str2,' ');
				word = ft_wordcat(word,str1,' ');
			}
		}
		i++;
	}
	ft_print_word(word);
	return (1);
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
	int		num_size;

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
	num_size = ft_strlen(number);
	print_result = ft_print_number_text(number, num_size, dictionary, dictionary_size);
	if(!print_result)
		write(1, "Dict Error\n", 11);
}
