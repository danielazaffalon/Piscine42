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
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	fill_result(char *rta, const char *str, char c, int *i)
{
	int	j;

	j = 0;
	while (str[j])
	{
		rta[*i] = str[j];
		(*i)++;
		j++;
	}
	if (c != 0)
	{
		rta[*i] = c;
		(*i)++;
	}
}

char	*ft_wordcat(char *str1, char *str2, char c)
{
	char	*rta;
	int		len1;
	int		len2;
	int		i;

	if (!str1)
		return (str2);
	if (!str2)
		return (str1);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	rta = (char *)malloc(len1 + len2 + 2);
	if (!rta)
		return (NULL);
	i = 0;
	fill_result(rta, str1, c, &i);
	fill_result(rta, str2, 0, &i);
	rta[i] = '\0';
	free(str1);
	free(str2);
	return (rta);
}
