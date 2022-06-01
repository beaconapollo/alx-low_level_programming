#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int in, out, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
  
	in = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (in == -1)
		return (-1);
	
	while (text_content[i])
		i++;
	out = write(in, text_content, i);
	if (out == -1)
		return (-1);
  
	close(in);
	return (1);
}
