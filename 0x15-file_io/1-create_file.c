#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
		return (-1);
	if (!write(fd, text_content, strlen(text_content)))
		return (-1);
	return (1);
}
