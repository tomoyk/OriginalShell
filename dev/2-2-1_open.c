#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// int open(const char *name, int flags);
// int open(const char *name, int flags, mode_t mode);

int main(void){

  // int fd = open("/home/test01/aa", O_RDONLY | );
  int fd = open("/home/test01/aa", O_WRONLY | O_TRUNC );
  if(fd == -1){
    // Error
  }

  


  return 0;
}
