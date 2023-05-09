

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd1;
	int		fd2;
	int		fd3;
	char	*line;
	int		i;

	fd1 = open("teste", O_RDONLY);
	fd2 = open("test2", O_RDONLY);
	fd3 = open("test3", O_RDONLY);
	i = 1;
	while (i < 11)
	{
		line = get_next_line(fd1);
		printf("l[%i] : %s", i, line);
		line = get_next_line(fd2);
		printf("l[%i] : %s", i, line);
		line = get_next_line(fd3);
		printf("l[%i] : %s", i, line);
		i++;
	}
	close(fd3);
	close(fd2);
	close(fd1);
	return (0);
}
