#include <stdio.h>
#include <string.h>

int main(){

  char *line;
  char *cmd = "exit";

  do{
    printf("(user@localhost /)# ");
    // fgets(line, sizeof(line), stdin);

    if( strcmp( line, cmd) == 0){
      return 0;
    }

  }while(fgets(line, sizeof(line), stdin) );

  return 0;
}
