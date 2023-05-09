#ifndef IO_H
#define IO_H
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcnt1.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
