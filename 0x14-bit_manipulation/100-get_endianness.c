#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness();
{
	int u;
	char *v;

	u = 1;
	v = (char *)&u;
	return (*v);
}
