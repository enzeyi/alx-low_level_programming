#include "main.h"
#include <stdio.h>
#include <stlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t val, i;
	FILE *fd;
	char *ptr = malloc(sizeof(char) * letters);

	val = i = 0;
	if (filename == NULL || ptr == NULL)
		return (0);
	fd = fopen(filename, "r");
	if (fd == NULL)
		return (0);
	fread(ptr, sizeof(char), letters, fd);
	fwrite(ptr, sizeof(char), letters, stdout);
	for (i = 0; ptr[i] != '\0'; i++)
		val++;
	fclose(fd);
	free(ptr);
	if (val != letters)
		return (0);
	return (val);
}
