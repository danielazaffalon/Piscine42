/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 23:02:00 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/26 23:08:14 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!((*str > 47) && (*str < 58)))
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char *str = "123";
	int	num;

	num = ft_str_is_numeric(str);
	printf("is numeric ? %s\n", num ? "true" : "false");
}*/
