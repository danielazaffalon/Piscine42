/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:20:40 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 23:31:47 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!((*str > 64) && (*str < 91)))
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

	num = ft_str_is_uppercase(str);
	printf("is uppercase ? %s\n", num ? "true" : "false");
}*/
