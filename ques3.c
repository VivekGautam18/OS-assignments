#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char **argv) {
  pid_t child;
  child = fork();
  if (child < 0) {
    printf("Problem in fork");
  } else if (child == 0) {
    printf("Inside the child process %d ", getpid());
  } else {
    wait(NULL);
  }
  printf("\Parent\n");
}
