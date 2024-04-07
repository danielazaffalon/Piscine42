/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_input2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrei2 <jferrei2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:20:52 by jferrei2          #+#    #+#             */
/*   Updated: 2024/04/07 13:28:20 by jferrei2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_size_array(char *number);

void	ft_fill_arr_with_input(char *num, char **arr, int n)
{
	int	size;
	int	i;
	int	j;
	int	k;
	int	length;

	n = n - 1;
	length = ft_size_array(num) - 1;
	size = 3;
   	i = 2;
	while (length >= 0)
	{
		if (i >= 0)
		{
			arr[n][i] = num[length];
			i--;
			length--;
		}
		else
		{
			i = 2;
			n--;
		}
	}
} 
