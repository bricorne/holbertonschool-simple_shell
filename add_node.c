#include "main.h"
void add_process(pid_t pid, char *command)
{
	int status;
	pid_t wpid;
	processe_node *new_node = malloc(sizeof(processe_node));
	processe_node *processe_liste = NULL;

	new_node->pid = pid;
	strcpy(new_node->command, command);
	new_node->status = 0;
	new_node->next = NULL;

	processe_liste = new_node;

	while ((wpid = waitpid(-1, &status, WNOHANG)) > 0)
	{
		processe_node *current_processe = processe_liste;
		while (current_processe)
		{
			if (current_processe->pid == wpid)
			{
				current_processe->status = WEXITSTATUS(status);
				break;
			}
			current_processe = current_processe->next;
		}
	}
}
