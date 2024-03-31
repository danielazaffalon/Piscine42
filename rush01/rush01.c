/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dazaffal <dazaffal@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:27:07 by dazaffal          #+#    #+#             */
/*   Updated: 2024/03/31 16:34:23 by dazaffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	fill_board(char board[][4], char c)
{
	int	i;
	int	j;

	i = 0;// reemplazar por apuntadores
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = c;
			j++;
		}
		i++;
	}
}

void	print_board(char board[][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &board[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	parsing(char views[][4], char *p)
{
	int	i;
	int	j;
	int	counter;

	write(1, "Views are: \nUp\nDown\nLeft\nRight\n", 32);
	counter = 0;
	i = 0;
	while (*p != '\0' && i < 4)
	{
		j = 0;
		while (*p != '\0' && j < 4)
		{
			views[i][j] = *p;
			write(1, &views[i][j], 1);
			write(1," ",1);
			j++;
			p = p + 2;
			counter++;
		}
		write(1, "\n", 1);
		i++;
	}
	if (counter != 16)
		return (0);
	else
		return (1);
}

int is_valid(char **board, char **views, int row, int col, int num)
{
	int 	i;

	i = 0;
	up = views[0][col];
	down = views[1][col];
	while (i < 4) // verificar que no se repita l valor en a fila o en la columna
	{
		if (board[row][i] == num && i != col)
			return (0);
		if (board[i][col] == num && i != row)
			return (0);
		i++;
	}
	i = 0;
	value = 1;
	while (i < row)
	{
		if (board[i][col] < board[i + 1][col] // up view
			value++;
		i++;
	}
	if(value != views[1][col])
		return (0);
	i = 0;
	value = 1;
	while (i > row)
	{
		if (board[i][col] < board[i - 1])
			value++;
		i++;
	}
	if (value != views[2][col]) //down view
   		return (0);	
	i = 0;
	value = 1;//minimo veo una caja
	while (i < col) //Verificar las vistas
	{
		if (board[row][i] < board[row][i + 1])
			value++;
		i++;
	}
	if (value != views[2][row]) //left view
		return (0);
	i = 3;
	value = 1;
	while (i > col)
	{
		if(board[row][i] < board[row][i - 1])
		   value++;	
		i--;
	}
	if (value != views[3][row]) //rigt view
		return (0);
	return (1);
}

int  solve(char **bard, int i, char **views)
{
	int row;
	int col;
	int num;
	
	num = 1;
	if (i == 16)
		return 1;
	row = i / 4;
	col = i % 4;

	// si el tablero tiene la casilla llena, regresamos a la llamada anterior
	if (board[row][col] != 0)
		return solve

	while (num <= 4)
	{
		if (is_valid(board, views, row, col, num) && )
		num++;
	}

}

int	main(int ac,char **av)
{
	char	*input;
	char	board[4][4];
	char	views[4][4];

	input = av[1];
	if (!parsing(views, input) && ac != 2)
	{
		write(1, "Error: unexpecting number of arguments", 40);
		return (1);
	}
	fill_board(board, '0');
	solve(board, 0, views);
	print_board(board);
}
