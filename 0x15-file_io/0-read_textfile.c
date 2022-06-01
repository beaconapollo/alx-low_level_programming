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

	buffer = malloc(letters);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	ch = read(file, buffer, letters);
	out = write(STDOUT_FILENO, buffer, ch);
	close(file);
	return (out);
}
