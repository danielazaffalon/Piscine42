/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:29:45 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/05 14:29:24 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*rta;
	int		len;
	int		i;

	len =  ft_strlen(src) + 1;
	rta = (char*)malloc(len);
	i = 0;
	while (i < len)
	{
		rta[i] = src[i];
		//printf("%c ",*rta);
		i++;
	}
	return (rta);
}

/*int main(int ac, char **av)
{
	int	i;
	char *rta;

	i = 1;
	while (i < ac)
	{
		rta = ft_strdup(av[i]);
		printf("%s\n", rta);
		i++;
	}
}*/
