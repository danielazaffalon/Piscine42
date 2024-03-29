/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:28:19 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/28 17:38:15 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	nb;

	i = 0;
	while (dest[i] != '\0')
		i++;
	nb = size - 1;
	while (*src != '\0' && i < nb)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}

/*int main(void)
{
	char *src = "Secondhhhhhhhhhhhh";
	char dest[20] = "First & ";
	unsigned int size = 20; 
	unsigned int rst;

	rst = strlcat(dest,src,size);
	printf("src = %s\ndest = %s\nrst = %i\n", src, dest, rst);
}*/
