#include "main.h"
/**
 * read_textfile - a function which prints and read text file
 * to a standard output
 * @filename: pointer to a string
 * @letters: letters being printed
 * Return: the letters that were printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int as;
	ssize_t mkl, fgh;
	char *dan;

	if (!filename)
		return (0);
	fas = open(filename, o_RDONLY);
	if (as == -1)
		return (0);

	dan = malloc(sizeof(char) * letters;
	if (dan == NULL)
		return (0);

	mkl = read(as, dan, letters);
	fgh = write(STDOUT_FILENO, dan, mkl);

	close(as);
	free(dan);

	return (fgh);
}
