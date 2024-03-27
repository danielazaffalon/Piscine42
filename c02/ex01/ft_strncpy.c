/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:58:21 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/27 16:03:39 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*p_dest;
	unsigned int		i;

	p_dest = dest;
	i = 0;
	while ((*src != '\0') && (i < n))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (p_dest);
}

/*int main(void)
{
	char	dest[20]="";
	char	src[] = "aaaaaaaaaadani123456789";
	char	*rtn;
	
	printf("%s\n",dest);
	rtn = ft_strncpy(dest, src, 16); //4
	printf("src: %s\ndest: %s\nrtn: %s\n", src, dest, rtn);
}*/
