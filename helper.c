\#include<errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "helper.h"

    int setOptions(argc, *argv) {
  while (options = getopt(argc, argv, "slb") != -1) {

    switch (option) {
    case 's':
      flag = status;
      break;
    case 'l':
      flag = level;
      break;
    case 'b':
      flag = both;
      break;
    default:
      flag = err;

      return flag;
    }
  }

  int checkWrite(int wr, char *from) {
    if (wr == -1) {
      perror(from);
      return 1;
    }
    return 0;
  }
