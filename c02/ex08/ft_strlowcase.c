/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:28:32 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/27 10:31:25 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str != '\0')
	{
		if ((*str > 64) && (*str < 91))
			*str = *str + 32;
		str++;
	}
	return (p_str);
}

/*int main(void)
{
	//char *str = "HOLA";
	char	str[] = "HOLA mUNdO";
	//char *str = "234T";
	//char *str = "";
	char	*out;

	out = ft_strlowcase(str);
	printf("%s\n%s\n", str, out);
}*/
