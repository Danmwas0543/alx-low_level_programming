#include "main.h"
/**
 * append_text_to_file - adding text to a file
 * @filename: name of file being added text
 * @text_content: content that is
 * going to be appended to the already existing file
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int gh;
	int newsletters;
	int xc;

	if (!filename)
		return (-1);

	gh = open(filename, O_WRONLY | O_APPEND);

			if (gh == -1)
				return (-1);

	if (text_content)
	{
		for (newsletters = 0; text_content[newsletters]; newsletters++)
			;
		xc = write(gh, text_content, newsletters);

		if (xc == -1)
			return (-1);
	}
	close(gh);

	return (1);
}
