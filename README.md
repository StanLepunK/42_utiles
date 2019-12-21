# 42_utiles
Utile pour les corrections

GNL
`./a.out /dev/random`
et aussi pendant que dev random s'execute dans une autre consle
`
leaks 'nom du prog'`. par example `a.out`

```
#include <stdio.h>
#include “get_next_line.h”
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
/*
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
*/
```
