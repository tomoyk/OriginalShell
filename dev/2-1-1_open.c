#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

// int open(const char *name, int flags);
// int open(const char *name, int flags, mode_t mode);

int main(void){

  // 読み取り専用で開く
  // int fd = open("/home/test01/aa", O_RDONLY | );

  // 書き込み用にオープン. ファイルが存在しない場合はエラー(O_CREATが無いため)
  int fd = open("/root/hoge", O_WRONLY | O_TRUNC );

  if(fd == -1){
    // Error
  }

  

  


  return 0;
}
