#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: contentss of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fDesc, i = 0;

	if (filename == NULL)
		return (-1);
	fDesc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fDesc == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fDesc);
		return (1);
	}
	while (text_content[i])
		i++;
	write (fDesc, text_content, i);
	return (1);
}
