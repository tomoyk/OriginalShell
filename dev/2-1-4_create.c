#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int create(const char *name, mode_t mode);

int fd;
fd = create(file, 0644);

int fdA;
fdA = create(file, O_WONLY | O_CREAT | O_TRUNC, 0644);


int main(void){




  


  return 0;
}
