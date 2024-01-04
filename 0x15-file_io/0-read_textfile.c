#include "main.h"

/**
 * read_textfile- function that reads a file
 * @filename: file
 * @letters: size of letters to be read
 * Return: number of letters that are read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	ssize_t bytscanned;
	ssize_t bytsprinted;
	char *message;

	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
	{
		return (0);
	}

	message = malloc(letters + 1);
	if (message == NULL)
	{
		close(ptr);
		return (0);
	}

	bytscanned = read(ptr, message, letters);
	if (bytscanned == -1)
	{
		free(message);
		close(ptr);
		return (0);
	}

	bytsprinted = write(STDOUT_FILENO, message, bytscanned);

	if ((bytsprinted != bytscanned) || (bytsprinted == -1))
	{
		return (0);
	}

	free(message);

	close(ptr);

	return (bytscanned);
}
