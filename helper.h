#ifndef HELPER_H
#define HELPER_H

int checkWrite(int, char[]);

typedef enum { err, status, level, both } flag_t;

flag_t flag;
int options;

int setOptions(int argc, char *argv);
#endif
