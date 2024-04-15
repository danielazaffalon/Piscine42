#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define	SIZE 1024

int main()
{
	int		file;
	int		buff_size;
	char	buff;
	int		size;

	file = open("numbers.dict", O_RDONLY);
	buff_size = read(file, &buff, 1);
	size = 0;
	while (buff_size)
	{
		buff_size = read(file, &buff, 1);
		size++,
		//printf("%c",buff);
		printf("%i",buff_size);
	}
	printf("\nsize:%i\n",size);
	close(file);
	return buff_size;
}
