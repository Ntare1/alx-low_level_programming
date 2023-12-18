#include "main.h"

/**
 * create_file- function that creates file
 * @filename: name of the file
 * @text_content: string to be added to the file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int ptr;
	int x = 0;

	if (filename == NULL)
		return (-1);

	ptr = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (ptr == -1)
		return (-1);

	while (text_content[x] != '\0')
	{
		x++;
	}

	write(ptr, text_content, x);

	close(ptr);

	return (1);
}

