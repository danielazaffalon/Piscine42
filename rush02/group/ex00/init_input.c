/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrei2 <jferrei2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:22:10 by jferrei2          #+#    #+#             */
/*   Updated: 2024/04/07 11:42:56 by jferrei2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_fill_arr_with_input(char *num, char **arr, int n);

int	ft_size_array(char *number)
{
	int	size;
	
	size = 0;
	while (number[size])
	{
		size++;
	}
	return (size);
}

void ft_fill_array(char *arr, int num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		arr[i] = '0';	
		i++;
	}
}

void	ft_fill_arr2(char **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = (char *)malloc(sizeof(char) * 4 + 1);
		if (!arr[i])
		{
			return ;
		}
		ft_fill_array(arr[i], 4);
		i++;
	}
}

char **ft_init_input(char *number)
{
	int	len_num;
	int	len_array;
	char **arr;
	
	len_num = ft_size_array(number);
	len_array = len_num / 3;
	if(len_num % 3 != 0)
	{
		len_array++;
	}
	arr = (char **)malloc(sizeof(char *) * len_array + 1);
	if (!arr)
		return (NULL);
	ft_fill_arr2(arr, len_array);
	ft_fill_arr_with_input(number, arr, len_array);
	return (arr);
}





/*
int	main(void)
{
	char *a = "1234567890";
	char **arr;
	int i;
	int j;

	arr = ft_init_input(a);
	
	i = 0;
	j = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[i][j])
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}

	i = 0;
	while(arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
