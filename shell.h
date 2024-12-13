#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/*execute functions*/
char *read_line(void);
void execute_command(char *line);

/*handle strings*/
int _strlen(char *str);
int white_space(const char *str);

#endif
