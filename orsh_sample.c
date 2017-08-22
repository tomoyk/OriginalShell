#include <stdio.h>
#include <string.h>

int main(){

  char *line;
  char *cmd = "exit";
  char *zero, *param;

  while(1) {
    printf("(user@localhost /)# ");
    fgets(line, sizeof(line), stdin);
    // fgets(line, sizeof(line), stdin);

    zero=strtok_r(line, " \r\n\t", &param);

    if( zero==NULL ){
      continue;
    }else if( strcmp(zero, cmd)==0 ){
      return 0;
    }
  }

  return 0;
}
