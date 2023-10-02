#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file.
 * @text_content: string parameter to add to the file.
 * Return: 1 on success and -1 on failure and -1 on NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, len);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
