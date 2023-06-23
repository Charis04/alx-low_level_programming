#include <unistd.h>
#include <stdio.h>

char putchar(char c);
{
	return(write(1, &c, 1));
}
