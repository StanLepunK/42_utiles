#include "get_next_line.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>


#include <stdio.h>
#include “get_next_line.h”
int main (int num, char**arg)
{
  (void)num;
  int fd = open(arg[1], O_RDONLY);
  char *line;
  // int index = 0;
  int ret;
  while((ret = get_next_line(fd, &line)) == 1) {
    printf(“%d: %s\n”, ret, line);
    free(line);
  }
  printf(“%d: %s\n”, ret, line);
  free(line);
  // system(“leaks a.out”);
  return 0;
}


__attribute__((destructor))
void void_(void)
{
	while(1);
}
