#ifndef CHECKER_H
# define CHECKER_H

// List of includes 

# include <sys/wait.h>   
# include <sys/types.h>
# include <sys/stat.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <ctype.h>
# include <stdarg.h>
# include <errno.h>
# include <signal.h>
# include <limits.h>

# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"

typedef struct		s_struct
{
	char	string[2048];
	char    **parseString;
	int		*all_int;
}                   s_struct; 






// UTILS

void		ft_putstr(char *s);
char		**ft_split(char const *s, char c);
void		*ft_memset(void *b, int c, size_t len);
int			ft_check_if_all_correct(s_struct *s_alpha, char **argv, int argc);
long int	ft_atoi(const char *j);
int			ft_count_words(char **arr);
void		ft_putnbr(int n);
size_t		ft_strlen(const char *s);
char		*ft_trim(char *str);
int			ft_isinteger(char *str);


#endif