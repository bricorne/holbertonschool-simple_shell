#include "main.h"
void read_command(char **command,size_t *len)
{
    

    printf("$ ");
    if (getline(command,len,stdin) ==  -1)
    {
        exit(EXIT_FAILURE);
    }
    (*command)[strlen(*command) -1 ] = '\0';

}