#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// int create(const char *name, mode_t mode);

int main(void){

  char *file = "/home/test01/aa";

  int fd;
  fd = create(file, 0644);

  int fdA;
  fdA = create(file, O_WONLY | O_CREAT | O_TRUNC, 0644);

  return(0);

}
