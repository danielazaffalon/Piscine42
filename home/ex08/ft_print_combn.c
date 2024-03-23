#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void calculate(char *pt_array, int start, int end, int position, int n)
{
	int i;
	
	i = start;
	
	while(i < end)
	{
		pt_array[position] = i + 48;
		if (position + 1 < n) calculate(pt_array, i + 1, end + 1, position + 1, n);
		else {
			write(1, pt_array, n);
			write(1, ", ", 2);
		}
		i = i + 1;
	}
}

void ft_print_combn(int n)
{
	char num_array[10];
	calculate(num_array, 0, 10 - n + 1, 0, n);
}

int main(void)
{
	ft_print_combn(8);
	ft_putchar('\n');
}
