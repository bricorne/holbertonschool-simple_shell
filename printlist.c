#include "main.h"
void print_list()
{
    processe_node *current_processe = malloc(sizeof(processe_node));

    while (current_processe)
    {
        //printf("%s %d\n",current_processe->command,current_processe->pid);
        current_processe = current_processe->next;
    }
}