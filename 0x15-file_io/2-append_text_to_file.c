#include "main.h"

/**
 * append_text_to_file- function that appends string to end of file
 * @filename: the file 's name
 * @text_content: thet string to be added
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	int x = 0;

	if (filename == NULL)
		return (-1);

	ptr = open(filename, O_WRONLY | O_APPEND);

	if (ptr == -1)
		return (-1);

	while (text_content != NULL && text_content[x] != '\0')
	{
		x++;
	}

	if (x > 0)
	{
		ssize_t byt_appended = write(ptr, text_content, x);

		if (byt_appended == -1)
		{
			close(ptr);
			return (-1);
		}
	}

	close(ptr);
	return (1);
}
