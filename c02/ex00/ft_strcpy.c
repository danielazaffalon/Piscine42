/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:54:11 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 21:57:39 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p_dest);
}

/*int main(void)
{
	char	dest[20];
	char	src[] = "dani";
	char	*rtn;

	rtn = ft_strcpy(dest, src);

	printf("src: %s\ndest: %s\nrtn: %s\n", src, dest, rtn);
}*/
