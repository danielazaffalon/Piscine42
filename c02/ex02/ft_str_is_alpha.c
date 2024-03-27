/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 22:27:35 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/27 09:53:48 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(((*str > 64) && (*str < 91)) || ((*str > 96) && (*str < 123))))
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char 	str[] = "jl3kjlkj";
	char 	*p_str = str;
	int	alph;

	alph = ft_str_is_alpha(p_str);
	printf("is alphabetic %s\n", alph ? "true" : "false");
}*/
