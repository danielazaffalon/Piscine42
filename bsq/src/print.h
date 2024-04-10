/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 04:19:54 by dazaffal          #+#    #+#             */
/*   Updated: 2024/04/10 04:20:15 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "map.h"
# include <unistd.h>

int	write_square(char *path, struct s_map *map);
int	print_square(char *path);

#endif
