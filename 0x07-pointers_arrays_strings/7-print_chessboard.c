/**
 * print_chessboard - prints chessboard
 * @a: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
		printf("%s\n", a[i]);
}