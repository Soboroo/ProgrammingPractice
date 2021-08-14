#include <stdio.h>
#include <string.h>
main() {
  char s[45];
  scanf("%s", s);
  strspn char *ptr = strtok(s, ":");
  while (ptr) {
    printf("%04s\n", ptr);
    ptr = strtok(NULL, ":");
  }
}