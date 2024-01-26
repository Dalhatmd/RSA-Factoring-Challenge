#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	FILE *file;
	char *line;
	size_t n = 0;
	int num;
	ssize_t bytes_read;

	file = fopen(argv[1], "r");
	while ((bytes_read = getline(&line, &n, file)) != -1)
	{
		num = atoi(line);
		fwrite(line, bytes_read, 1, stdout);
	}
	free(line);
}
