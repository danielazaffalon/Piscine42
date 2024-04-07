/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jferrei2 <jferrei2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 00:50:42 by jferrei2          #+#    #+#             */
/*   Updated: 2024/04/07 13:19:00 by jferrei2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_verify(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] < '0' && str[i] > '9')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_check_number(char *str)
{
	int		i;
	char	*ptr;
	int		len;

	len = 0;
	ft_verify(str);
	ptr = malloc(sizeof(char) * len);
	i = 0;
	len = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] < '0' && str[i] > '9')
	{
		write(1, "Error\n", 6);
		return ("\0");
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		ptr[len] = str[i];
		len++;
		i++;
	}
	return (ptr);
}

char *ft_validate_input(int argc, char **argv)
{
	char *num;

	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	if (argc == 2)
	{
		num = ft_check_number(argv[1]);
	}
	return (num);
}
