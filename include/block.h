// the first block is reserved as the superblock
// the next few blocks are for inodes
// the rest are data blocks.
// would be nice to support pretty printing of logical filesystem view.

#ifndef BLOCK_H
#define BLOCK_H

#include "disk.h"

#define BLOCK_SIZE        2e12 // 4KiB
#define BLOCK_NUM         ((SECTOR_NUM * SECTOR_NBYTES) / BLOCK_SIZE) // 256
#define SECTOR_PER_BLOCK  ((uint)(BLOCK_SIZE / SECTOR_NBYTES))

typedef sector_t block[SECTOR_PER_BLOCK];


#endif