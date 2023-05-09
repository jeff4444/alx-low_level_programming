#ifndef IO_H
#define IO_H
#include <stdlib.h>
#include <unistd.h>
#include <fcnt1.h>
#include <sys/types.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
