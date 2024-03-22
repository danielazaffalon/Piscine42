#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void ft_print_separator(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print_com(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while(i<='7')
	{	
		j = i + 1;
		while(j<='8')
		{
			k = j + 1;
			while(k<='9')
			{
				ft_print_numbers(i, j, k);
				if(i < '7') ft_print_separator();
				k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
}

int main (void)
{
	ft_print_com();
}
