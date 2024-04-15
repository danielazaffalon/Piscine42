#include <stdio.h>
void function(int x, int *y)
{
	x = 10;
	y = &x;
}

int main(void)
{
	int a;
	int *b;
	int c;
	a = 2;
	c = 5;
	b = &c;
	function(a,b);
	printf("a:%i\t*b:%i",,a,*b);
}
