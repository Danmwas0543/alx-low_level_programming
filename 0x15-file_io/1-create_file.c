#include "main.h"
/**
 * create_file - creates content and copy it
 * into a file
 * @filename: name of the file being created
 * @text_content: the data that is going to be
 * copied into a file
 * Return: 1 on success otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int fgh;
	int newsletters;
	int rxc;

	if (!filename)
		return (-1);

	fgh = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fgh == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (newsletters = 0; text_content[newsletters]; newsletters++)
		;
	rxc = write(fgh, text_content, newsletters);

	if (rxc == -1)
		return (-1);
	close(fgh);

	return (1);
}
