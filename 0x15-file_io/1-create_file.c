#include "main.h"

/**
 * create_file - creates a file
 * @filename:name of the file to create
 * @text_content: NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure
 *
 *The created file must have those permissions: rw-------.
 *If the file already exists, do not change the permissions.
 *if the file already exists, truncate it
 *if filename is NULL return -1
 *if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	/* write or create if nonexistant */
	/* truncate to zero bytes if existant */
	/* permission : S_I | R, W, X | USR, GRP, OTH */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd == -1)
			return (-1);

	if (text_content)
	{
		while (text_content[i]) /* string length */
			i++;
		if (write(fd, text_content, i) != i)
			return (-1);
	}
	close(fd);
	return (1);
}
