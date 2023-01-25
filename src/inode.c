#include "../include/inode.h"


void sector_to_inode(sector_t sector, struct inode* inode) {
    off_t o = 0;
    memcpy(&(inode->mode),      sector, 2);     o += 2;
    memcpy(&(inode->uid),       sector + o, 2); o += 2;
    memcpy(&(inode->size),      sector + o, 4); o += 4;
    memcpy(&(inode->time),      sector + o, 4); o += 4;
    memcpy(&(inode->ctime),     sector + o, 4); o += 4;
    memcpy(&(inode->mtime),     sector + o, 4); o += 4;
    memcpy(&(inode->dtime),     sector + o, 4); o += 4;
    memcpy(&(inode->gid),       sector + o, 2); o += 2;
    memcpy(&(inode->links_cnt), sector + o, 2); o += 2;
    memcpy(&(inode->blocks),    sector + o, 4); o += 4;
    memcpy(&(inode->block),     sector + o, 4);
}


ssize_t get_inode(uint inum, struct inode* inode) {
    if(inum >= TOTAL_INODES) return -1;
    uint sector_num = ((IBLOCK_BASE * BLOCK_SIZE) + (INODE_NBYTES * inum)) / SECTOR_NBYTES;

    sector_t buf; 
    if(!read_sector(sector_num, buf)) return -1;
    sector_to_inode(buf, inode);
    
    return 1;
}