#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  pid_t child;
  child = fork();
  if (child < 0) {
    printf("Fork not call sucessfully");
  } else{
    printf("Inside the child process %d ", getpid());
  }
  printf("\nParent process\n");
}
