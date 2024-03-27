/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 11:14:05 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/27 13:11:29 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_lowcase(char str)
{
	if ((str > 96) && (str < 123))
		return (1);
	else
		return (0);
}

int	ft_is_upcase(char str)
{
	if ((str > 64) && (str < 91))
		return (1);
	else
		return (0);
}

int	ft_is_num(char str)
{
	if ((str > 47) && (str < 58))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*p_str;
	char	*p_prev;

	p_prev = str;
	p_str = p_prev + 1;
	if (ft_is_lowcase(*p_prev))
		*p_prev = *p_prev - 32;
	while (*p_str != '\0')
	{
		if (ft_is_upcase(*p_str) && (ft_is_lowcase(*p_prev)
				|| ft_is_upcase(*p_prev) || ft_is_num(*p_prev)))
			*p_str = *p_str + 32;
		else if (ft_is_lowcase(*p_str) && !(ft_is_upcase(*p_prev)
				|| ft_is_lowcase(*p_prev) || ft_is_num(*p_prev)))
			*p_str = *p_str - 32;
		p_str++;
		p_prev++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *out;

	out = ft_strcapitalize(str);
	printf("%s\n%s\n", str, out);
}*/
