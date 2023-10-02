#include "main.h"
/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: upon success 1 and fialure -1
 */
int create_file(const char *filename, char *text_content)
{
	int def, win, leth = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leth = 0; text_content[leth];)
			leth++;
	}

	def = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(def, text_content, leth);

	if (def == -1 || win == -1)
		return (-1);

	close(def);

	return (1);
}
