/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:20:24 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/27 10:25:12 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	char	*p_str;

	p_str = str;
	while (*str != '\0')
	{
		if ((*str > 96) && (*str < 123))
			*str = *str - 32;
		str++;
	}
	return (p_str);
}

/*int main(void)
{
	//char *str = "HOLA";
	char	str[] = "daniela";
	//char *str = "234T";
	//char *str = "";
	char	*out;

	out = ft_strupcase(str);
	printf("%s\n%s\n", str, out);
}*/
