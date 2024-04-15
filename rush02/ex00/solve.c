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

char	*ft_strcpy(char *src, int len);
char	*ft_find_word(char *buffer, char *num, int buff_size);
char	*ft_wordcat(char *str1, char *str2, char c);
void	ft_print_word(char *word);

//Esta es la funcion recursiva para imprimir de a tres. Retorna 1 si todo
// va bien, o 0 si falla algo.
int	ft_print_number_text(char *num, int num_size, char *dic, int dic_size)
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
			if (mod == 2)
			{
				str1 = ft_strcpy(num + i, 2);
				if (num[i] == '1')
				{
					str2 = ft_find_word(dic, str1, dic_size);
					free(str1);
					word = ft_wordcat(word, str2, ' ');
					i++;
					if (num_size - i - 1 > 0)
					{
						j = 1;
						str1 = (char *)malloc(num_size - i + 1);
						str1[0] = '1';
						while (j < num_size - i)
							str1[j++] = '0';
						str1[j] = '\0';
						str2 = ft_find_word(dic, str1, dic_size);
						word = ft_wordcat(word, str2, ' ');
					}
				}
				else
				{
					str1[1] = '0';
					str2 = ft_find_word(dic, str1, dic_size);
					free(str1);
					word = ft_wordcat(word, str2, ' ');
				}
			}
			else if (mod == 1)
			{
				str1 = ft_strcpy(num + i, 1);
				str2 = ft_find_word(dic, str1, dic_size);
				word = ft_wordcat(word, str2, ' ');
				free(str1);
				if (num_size - i - 1 > 0)
				{
					j = 1;
					str1 = (char *)malloc(num_size - i + 1);
					str1[0] = '1';
					while (j < num_size - i)
						str1[j++] = '0';
					str1[j] = '\0';
					str2 = ft_find_word(dic, str1, dic_size);
					word = ft_wordcat(word, str2, ' ');
				}
			}
			else
			{
				str1 = ft_strcpy(num + i, 1);
				str2 = ft_find_word(dic, str1, dic_size);
				free(str1);
				str1 = ft_find_word(dic, "100", dic_size);
				word = ft_wordcat(word, str2, ' ');
				word = ft_wordcat(word, str1, ' ');
			}
		}
		i++;
	}
	ft_print_word(word);
	return (1);
}
