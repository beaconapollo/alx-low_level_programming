#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX
 * @filename: name of a text file
 * @letters: the number of letters
 * Return: returns number of characters other 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, ch, out;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	ch = read(file, buffer, letters);
	if (ch == -1)
		return (0);
	out = write(STDIN_FILENO, buffer, ch);
	if (out == -1)
		return (0);
	close(file);
	free(buffer);
	return (out);
}
