/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:37:28 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/25 23:48:13 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int div;
	int mod;
	
	//int *p_div;
	//int *p_mod;
	//p_div = &div;
	//p_mod = &mod;
	//ft_div_mod(12, 5, p_div, p_mod);

	ft_div_mod(12, 7, &div, &mod);
	printf("div: %i, mod: %i", div, mod);
}*/
