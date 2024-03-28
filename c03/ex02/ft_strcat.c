/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:17:22 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/28 11:04:21 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	char	*p_dest;

	p_dest = dest;
	while (*p_dest != '\0')
		p_dest++;
	while (*src != '\0')
	{
		*p_dest = *src;
		p_dest++;
		src++;
	}
	*p_dest = '\0';
	return (dest);
}

/*int main(void)
{
	char *src = "frist string";
	char dest[30] ="second string";
	char *rst;

	rst = ft_strcat(dest,src);
	printf("src = %s\n dest = %s\n rst = %s\n", src, dest, rst);
}*/
