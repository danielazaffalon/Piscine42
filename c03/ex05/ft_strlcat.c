/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 12:28:19 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/02 15:31:19 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
//#include <stdlib.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	rta;
	unsigned int	i;

	src_size = 0;
	dest_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	while (dest[dest_size] != '\0')
		dest_size++;
	if (size < dest_size + 1)
		rta = src_size + size;
	else
	{
		rta = dest_size + src_size;
		i = 0;
		while (src[i] != '\0' && i < (size - (dest_size + 1)))
		{
			dest[dest_size + i] = src[i];
			i++;
		}
		dest[dest_size + i] = '\0';
	}
	return (rta);
}

//cc ft_strlcat.c - lbsd
/*int main(int ac, char **av)
{
	char dest[100] = "aaaa";
	char ft_dest[100] = "aaaa";
    char *src = "xyz";
    int size = atoi(av[1]);

	unsigned int rst;
	unsigned int ft_rst;
	rst = strlcat(dest,src,size);
	ft_rst = ft_strlcat(ft_dest,src,size);
	printf("size%i src = %s\tstrlcat: dest = %s ", size, src, dest, rst);
	printf("rst = %i\t st_strlcat: dest = %s rst = %i\n", ft_dest, ft_rst);
}*/
