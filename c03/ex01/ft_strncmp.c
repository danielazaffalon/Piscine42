/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:48:44 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/28 10:10:11 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				rta;
	unsigned int	i;

	rta = 0;
	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (rta == 0) && (i < n))
	{
		rta = s1[i] - s2[i];
		i++;
	}
	return (rta);
}

/*int main (void)
{
	char *s1 = "hello world";
	char *s2 = "hello worl";
	unsigned int n = 10;
	int result;
	result = ft_strncmp(s1, s2, n);
	printf("Result: %i\n", result);
}*/
