#include "main.h"
void read_command(char **command, size_t *len)
{
	if (isatty(STDIN_FILENO))
	{
		printf("$ ");
	}
	if (getline(command, len, stdin) ==  -1)
	{
		if (command)
			free(*command);
		exit(EXIT_FAILURE);
	}
	(*command)[strlen(*command) - 1] = '\0';
}
