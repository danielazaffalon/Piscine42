#include "ft_putchar.h"
int main(){
	char letter='z';
	while (letter>='a'){
		ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
}
