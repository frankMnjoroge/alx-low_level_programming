#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: upon success 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return (*c);
}
