#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *, size_t);
int create_file(const char *filename, char *text_content);

#endif