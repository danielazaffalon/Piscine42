/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:16:35 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/28 17:41:18 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strstr(char *str, char *tofind)
{
	int		i;
	char	*point;

	point = 0;
	if (*str == '\n' && *tofind == '\n')
		point = str;
	while (*str != '\0' && point == 0)
	{
		i = 0;
		while (tofind[i] != '\0' && str[i] == tofind[i])
			i++;
		if (tofind[i] == '\0')
			point = str;
		str++;
	}
	return (point);
}

/*int main(void)
{
	char *str = "palabras";
	char *find = "abraf";
	char *point;

	point = ft_strstr(str, find);
	printf("str = %s\nfind = %s\npointer = %s\n", str, find, point);	
}*/
