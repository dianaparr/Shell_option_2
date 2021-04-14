#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

void read_path(char *buff, int count_pro);
char **alloc_double_pointer(int count_wds, char *buff, char *delim);
void free_double_pointer(char **buff, int count_wds);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strtok(char *s, char *delim);
int _words(char *buff);
void *_calloc(unsigned int nmemb, unsigned int size);
void read_commands(char *buff, int count_pro);
char *_getenv(const char *var);
char *_strchr(char *s, char c);
int _strncmp(char *s1, char *s2, size_t n_bytes);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strtok_v2(char *s, char *delim);
char *_itoa(int number);
void error_execve_paths(char *buff, int count_pro);
void error_stat_paths_commands(char *buff, int count_pro);
void create_child_path(char **dp, char *buff, int count_pro);
void create_child_commands(char **dp_path, char **dp_commands, char *buff,
			   int count_pro);

#endif /* HEADER_FILE_H */
