#ifndef INODE_H
#define INODE_H

#include <stdlib.h>
#include <stdint.h>

#include "block.h"
#include "disk.h"

#define ROOT_INODE               2
#define IBLOCK_BASE              3
#define TOTAL_INODES             256
#define INODE_NBYTES             512
#define INODE_PER_BLOCK          (BLOCK_SIZE / INODE_NBYTES)
#define INODE_DIRECT_BLOCK_PTRS  8


struct inode {
    uint16_t mode;                            // read/write/execute flags
    uint16_t uid;                             // who owns file
    uint32_t size;                            // how many bytes in file
    uint32_t time;                            // time last accessed
    uint32_t ctime;                           // creation time
    uint32_t mtime;                           // last modified time
    uint32_t dtime;                           // deletion time
    uint16_t gid;                             // group file belongs to
    uint16_t links_cnt;                       // number hard links to file
    uint32_t blocks;                          // number of blocks for this file
    uint32_t block[INODE_DIRECT_BLOCK_PTRS];  // disk pointers
};

/**
 * Reads inode with number inum from disk.
 */
ssize_t get_inode(uint32_t inum, struct inode* inode);


/** Helpers **/

void sector_to_inode(sector_t sector, struct inode* inode);

#endif