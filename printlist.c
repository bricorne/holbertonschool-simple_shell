#include "main.h"
void print_list(void)
{
	processe_node *current_processe = malloc(sizeof(processe_node));

	while (current_processe)
	{
		current_processe = current_processe->next;
	}
}
