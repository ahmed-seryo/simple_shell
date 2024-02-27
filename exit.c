#include "shell.h"
/**
 *exit_cmd - function of exits to program
 *@array: array whit the command
 *@av: parameter of main
 *@line: getline buffer to frees
 *@cont: count of executes
 *@ret_status: last status to exit
 *Return:status
 */
int exit_cmd(char **array, char *av[], char *line, int cont, int ret_status)
{
	int x = 0, exit_stat, numb;

	while (array[x] != NULL)
	{
		x++;
	}
	if (x == 1)
	{
		free(array);
		free(line);
		exit(ret_status);
	}
	if (x >= 2)
	{
		for (x = 0; array[1][x] != '\0'; x++)
		{
			numb = _isdigit(array[1][x]);
			if (numb == 0)
			{
				print_errors(array, av, cont, 2);
				ret_status = 2;
				return (ret_status);
			}
		}
		exit_stat = _atoi(array[1]);
		free(array);
		free(line);
		exit(exit_stat);
	}
	return (ret_status);
}
