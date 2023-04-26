#include "main.h"
void execute_command(char **args)
{
    pid_t pid;
    int status;
     char *path = "/bin/";
  char *full_path = malloc(strlen(path) + strlen(args[0]) + 1); 
  strcpy(full_path, path);
  strcat(full_path, args[0]); 

    pid = fork();

    if (pid == -1)
    {
        perror("fork failed");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        if(execve(full_path,args,NULL) == -1)
        {
            perror("failed execute");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        add_process(pid,args[0]);
        waitpid(pid,&status,0);
        remove_process(pid);
    }
    free(full_path);
}
