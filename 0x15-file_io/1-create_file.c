#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the name of the file to create
 * @text_content: contentss of the file
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des, i = 0;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file_des);
		return (1);
	}
	while (text_content[i])
		i++;
	write (file_des, text_content, i);
	return (1);
}
