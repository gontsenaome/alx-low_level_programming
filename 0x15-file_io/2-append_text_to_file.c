#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file being created
 * @text_content: the string to add at the end of the file.
 *
 * Return: if the file fails or filename is NULL -1
 *  If the file does not exist the user lacks write permissions - -1.
 * otherwise - 1 on success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len -= 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (w == -1 || o == -1)
		return (-1);

	close(o);

	return (1);
}
