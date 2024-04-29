#ifndef INCLUDE_H
# define INCLUDE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# include "ft_printf.h"
# include "get_next_line.h"
# include "libft.h"

int	main(int ac, char **av);

/*			ERROR			*/
void	errorcall(void (*f)());
void	errorbase(void);
void	errorargument(void);
void	errorexec(void);
void	errorpathing(char **cmd);
/*			FREE			*/
void	free_str(char *str);
void	free_str_tab(char **str);

/*			UTILS			*/
char	path_finder(char *cmd, char **envp);
/*			BONUS			*/

#endif