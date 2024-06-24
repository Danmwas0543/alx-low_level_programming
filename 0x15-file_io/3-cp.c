#include "main.h"
#include <stdio.h>
/**
 * errof - check for error in files
 * and if they are opened
 * @filef: file which is going to be copied
 * (source file)
 * @fileo: new file generated from copying
 * an existing file
 * @dan: array of arguments
 * Return: none
 */
void errof(int filef, int fileo, char *dan[])
{
	if (filef == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", dan[1]);
				exit(98);
	}
	if (fileo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dan[2]);
	}
}

/**
 * main - copying data to another file
 * @danilo: number of args
 * @dan: Array of arguments
 * Return: 0
 */
int main(int danilo, char *dan[])
{
	int filef, fileo, errcse;
	ssize_t noofchars, cvb;
	char wangui[1024];

	if (danilo != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	filef = open(dan[1], O_RDONLY);
	fileo = open(dan[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0644);
	errof(filef, fileo, dan);

	noofchars = 1024;
	while (noofchars == 1024)
	{
		noofchars = read(filef, wangui, 1024);
		if (noofchars == -1)
			errof(-1, 0, dan);
		cvb = write(fileo, wangui, noofchars);
		if (cvb == -1)
			errof(0, -1, dan);
	}

	errcse = close(filef);
	if (errcse == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filef);
		exit(100);
	}
	errcse = close(fileo);
	if (errcse == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileo);
		exit(100);
	}
	return (0);
}
