#include "header_file.h"

/**
 * -
 *@:
 *@:
 *Return:
 */
void read_path(char *buff, int count_pro)
{
	int count_wds = 0, state = 0;
	char **dp = NULL, *delim = " ";
	struct stat st_s;

	count_wds = _words(buff);
	dp = alloc_double_pointer(count_wds, buff, delim);
	state = stat(dp[0], &st_s);
	if (state == 0)
		create_child_path(dp, buff, count_pro), free(dp), free(buff);
	else
		error_stat_paths_commands(buff, count_pro), free(dp), free(buff);
	return;
}

/**
 * -
 *@:
 *@:
 *Return:
 */
void read_commands(char *buff, int count_pro)
{
	int count_wds_path = 0, count_wds_commands = 0;
	char  *_path = NULL, *dest = NULL, **dp_path = NULL,
		*delim1 = ":", *delim2 = " ", **dp_commands = NULL;
	int i = 0;

	_path = _getenv("PATH");
	/* path */
	count_wds_path = _words(_path);
	dp_path = alloc_double_pointer(count_wds_path, _path, delim1);
	/* commands */
	count_wds_commands = _words(buff);
	dp_commands = alloc_double_pointer(count_wds_commands, buff, delim2);
	create_child_commands(dp_path, dp_commands, buff, dest, count_pro);
	free(dp_path), free(dp_commands), free(buff), exit(1);
	return;
}

/**
 * -
 *@:
 *@:
 *Return:
 */
void create_child_commands(char **dp_path, char **dp_commands, char *buff,
			   char *dest, int count_pro)
{
	pid_t child = 0;
	char **dp_two = dp_commands, **dp_three = dp_path, *concat = NULL;
	int counts_path = 0;
	DIR *o_dir = NULL;
	struct dirent *r_dir = NULL;
	struct stat st_s;

	while (dp_three[counts_path] != NULL)
	{
		o_dir = opendir(dp_three[counts_path]);
		while ((r_dir = readdir(o_dir)) != NULL)
		{
			if (_strcmp(r_dir->d_name, dp_two[0]) == 0)
			{
				concat = _strcat(dp_three[counts_path], "/");
				printf("%s\n", concat);
				dest = _strcat(concat, dp_two[0]);
				if ((stat(dest, &st_s)) == 0)
				{
					child = fork();
					if (child == 0)
					{
						if ((execve(dest, dp_two, NULL) == -1))
							printf("%d: %s: not found\n", count_pro, buff),
								free(dp_commands), free(dp_three), free(dp_two), free(buff), exit(-1);
					}
					else if (child == -1)
						write(STDOUT_FILENO, "Error\n", 6), free(dp_three),
							free(dp_two), free(buff);
					else
						wait(NULL);
				}
				else
					free(dp_three), free(dp_two), free(buff);
				closedir(o_dir);
				dp_three = NULL;
				break;
			}
		}
		counts_path++;
	}
	error_stat_paths_commands(buff, count_pro), free(dp_three),
		free(dp_two), free(buff);
	return;
}


/**
 * -
 *@:
 *@:
 *Return:
 */
void create_child_path(char **dp, char *buff, int count_pro)
{
	pid_t child = 0;
	char **dp_two = NULL;

	dp_two = dp;
	child = fork();
	if (child == 0)
	{
		if ((execve(dp_two[0], dp_two, NULL) == -1))
			error_execve_paths(buff, count_pro),
				free(dp_two), free(buff), exit(1);
	}
	else if (child == -1)
		free(dp_two), free(buff), write(STDOUT_FILENO, "Error\n", 6);
	else
		wait(NULL);
	return;
}
