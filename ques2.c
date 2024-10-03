#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
  pid_t child;
  child = fork();
  if (child < 0) {
    printf("Problem in fork");
  } else if (child == 0) {
    execl("/usr/bin/ls", "/usr/bin/ls", NULL);
    printf("Exec fail");
    exit(1);
  }
  printf("\nparent\n");
}
