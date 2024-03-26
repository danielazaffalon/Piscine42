/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:09:32 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 23:22:19 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!((*str > 96) && (*str < 123)))
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char *str = "";
	int	num;

	num = ft_str_is_lowercase(str);
	printf("is lowercase ? %s\n", num ? "true" : "false");
}*/
