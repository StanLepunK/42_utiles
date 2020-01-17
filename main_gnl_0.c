#include "get_next_line.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>


int main (int num, char**arg)
{
  (void)num;
  int fd = open(“/dev/stdin”, O_RDONLY);
  char *line;
  // int index = 0;
  int ret;
   // pour causer avec mon ordi pendant que me enfants cause avec Siri.
  get_next_line(fd, &line);
  printf(“%s”, line);
  return 0;
}