#include "main.h"
int main(void)
{
	char *command = NULL;
	size_t len = 0;
	int i = 0;
	char *token;
	char **args;
	extern char **environ;
	char **env = environ;

	while (1)
	{
		read_command(&command, &len);
		if (strcmp(command, "exit") == 0)
		{
			free(command);
			break;
		}
		if (strcmp(command, "env") == 0)
		{
			while (*env)
			{
				printf("%s\n", *env);
				env++;
			}
		}
		token = strtok(command, " ");
		args = malloc(64 * sizeof(char *));
		while (token != NULL)
		{
			args[i] = token;
			token = strtok(NULL, " "); 
			i++;
		}
		args[i] = NULL;
		i = 0;
		execute_command(args);
		print_list();
		free(args);
		free(command);
		command = NULL;
		len = 0;
	}
	return (0);
}
