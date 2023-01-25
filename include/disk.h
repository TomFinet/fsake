/**
 * Specifies all disk hardware operations allowed.
 * We are emulating the underlying disk hardware.  
 */

#ifndef DISK_H
#define DISK_H

#include <sys/types.h>
#include <stdint.h>
#include <string.h>

#define SECTOR_NUM     2048
#define SECTOR_NBYTES  512

typedef char sector_t[SECTOR_NBYTES / sizeof(char)]; 
typedef sector_t disk_t[SECTOR_NUM];

disk_t disk;

ssize_t read_disk_sector(disk_t disk, uint i, sector_t sector);
ssize_t write_disk_sector(disk_t disk, uint i, const sector_t sector);

ssize_t read_sector(uint i, sector_t sector);
ssize_t write_sector(uint i, const sector_t sector);


#endif