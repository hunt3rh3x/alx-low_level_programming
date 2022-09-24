#include <unistd.h>

/*
 *putchar - writes a single character to standard output
 *
 * return: n 0  
 *
 */
int _putchar(char c)
{	
	return (write(1, &c, 1));

}
