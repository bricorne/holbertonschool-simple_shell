#include "main.h"

void remove_process(pid_t pid)
{
    processe_node *processe_liste = NULL;
    processe_node *prev_processe = NULL;
    processe_node *current_processe = processe_liste;

    while (current_processe)
    {
        if (current_processe->pid == pid)
        {
            if (prev_processe == NULL)
            {
                processe_liste = current_processe->next;
            }
            else
            {
                prev_processe->next = current_processe->next;
            }
            free(current_processe);
            return;
        }
        prev_processe = current_processe;
        current_processe = current_processe->next;
    }

}