/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:33:56 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 23:37:32 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!((*str > 31) && (*str < 127)))
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	//char *str = "HOLA";
	//char *str = "lkkD";
	//char *str = "234T";
	char *str = "";
	int	num;

	num = ft_str_is_printable(str);
	printf("is uppercase ? %s\n", num ? "true" : "false");
}*/
