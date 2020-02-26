#include "get_next_line.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

int main() {
	int fd = open("voyage.txt",O_RDONLY);
	int count = 0;
	char *line;
	while (get_next_line(fd, &line) > 0) {
		printf("ligne %i %s\n",count,line);
		free(line);
		count++;
	}
	printf("ligne %i %s\n",count,line);
	free(line);
	close(fd);
	return 0;
}


__attribute__((destructor))
void void_(void)
{
	while(1);
}
