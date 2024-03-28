/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:06:40 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/28 09:45:47 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	rta;

	rta = 0;
	while ((*s1 != '\0' || *s2 != '\0') && rta == 0)
	{
		rta = *s1 - *s2;
		s1++;
		s2++;
	}
	return (rta);
}

/*int main (void)
{
	char *s1 = "hello world";
	char *s2 = "hello world";
	int result;
	result = ft_strcmp(s1, s2);
	printf("Result: %i\n", result);
}*/
