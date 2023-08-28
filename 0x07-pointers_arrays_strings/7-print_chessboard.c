#include "main.h"
/**
* _chessboard - prints chessboard
* @a: array parameter
* Return: 0 when successful
*/
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);
		_putchar('\n');
	}
}
