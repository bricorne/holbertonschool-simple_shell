#include "main.h"
void add_process(pid_t pid,char *command)
{
    processe_node *processe_liste = NULL;
    processe_node *new_node = malloc(sizeof(processe_node));

    new_node->pid = pid;
    strcpy(new_node->command,command);
    new_node->status = 0;
    new_node->next = processe_liste;
    processe_liste = new_node; 

}