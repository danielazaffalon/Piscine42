/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 10:51:35 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/28 12:29:24 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*p_dest;
	unsigned int	i;

	p_dest = dest;
	i = 0;
	while (*p_dest != '\0')
		p_dest++;
	while (src[i] != '\0' && i < nb)
	{
		p_dest[i] = src[i];
		i++;
	}
	p_dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char *src = "first string";
	char dest[30] = "second string\0******";
	unsigned int n = 5; 
	char *rst;

	rst = ft_strncat(dest,src,n);
	printf("src = %s\n dest = %s\n rst = %s\n", src, dest, rst);
}*/
