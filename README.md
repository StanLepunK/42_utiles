# 42_utiles
Utile pour les corrections

GNL
```
#include <stdio.h>
#include "get_next_line.h"
int main (int num, char**arg)
{
  (void)num;
  int fd = open(arg[1], O_RDONLY);
  char *line;
  // int index = 0;
  while(get_next_line(fd, &line) == 1) {
  	printf("%s\n",line);
  	free(line);
  }
  printf("%s\n",line);
  free(line);
  return 0;
}
```
