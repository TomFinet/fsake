/**
 * Specifies all operations on files supported by the filesystem. 
 */

#ifndef FILE_H
#define FILE_H

#include <stdint.h>

#include "inode.h"

#define FILE_LIMIT  100


struct file {
    char read;
    char write;
    uint offset;
    struct inode* inode;
};


struct file_table {
    struct file* files[FILE_LIMIT];
};


/**
 * Opens a file at pathname if it exists,
 * returning it's file descriptor.
 */
ssize_t open(char* pathname);


/**
 * Reads nbytes from file fd (if exists) into buf. 
 */
ssize_t read(uint fd, char* buf, size_t nbytes);


/**
 * Writes nbytes to file fd (if exists) from buf. 
 */
ssize_t write(uint fd, const char* buf, size_t nbytes);


/**
 * Closes the file fd.
 */
ssize_t close(uint fd);

#endif

