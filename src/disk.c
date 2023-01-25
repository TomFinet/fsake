#include "../include/disk.h"


ssize_t read_disk_sector(disk_t disk, uint i, sector_t sector) {
    if(i >= SECTOR_NUM) return -1;
    memcpy(sector, disk + i, sizeof(sector_t));
    return 1;
}


ssize_t write_disk_sector(disk_t disk, uint i, const sector_t sector) {
    if(i >= SECTOR_NUM) return -1;    
    memcpy(disk + i, sector, sizeof(sector_t));
    return 1;
}


ssize_t read_sector(uint i, sector_t sector) {
    return read_disk_sector(disk, i, sector);
}


ssize_t write_sector(uint i, const sector_t sector) {
    return write_disk_sector(disk, i, sector);
}