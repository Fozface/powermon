
#ifndef SENSOR_H
#define SENSOR_H

int openpwr();
int readpwr(long *, int *);
void closepwr();
int setReadStart(int);

#endif
