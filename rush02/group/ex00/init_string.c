/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrei2 <jferrei2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:35:02 by jferrei2          #+#    #+#             */
/*   Updated: 2024/04/07 13:53:21 by jferrei2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_size_array(char *number);

char	***ft_init_string(char **arr, char ***arr2)
{
	int size;
	int i;
	size = ft_size_array(arr[0]);
	arr2 = (char ***)malloc(sizeof(char **) * size + 1);
	if (!arr2)
	{
		return (NULL);
	}
	i = size;
	while (i < size)
	{
		arr2[i] = (char **)malloc(sizeof(char *) * 4 + 1);
		if (!arr2[i])
		{
			return (NULL);
		}
		i++;
	}
	return (arr2);
}
