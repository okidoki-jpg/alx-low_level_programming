#ifndef _main_h_
#define _main_h_

/* standard inports + read, write & exit imports */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/* additional imports for open */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


ssize_t read_textfile(const char *filename, size_t letters);

#endif
