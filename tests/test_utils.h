#ifndef TEST_UTILS_H
#define TEST_UTILS_H

#include <stdlib.h>

#include "../include/disk.h"


ssize_t test_sector_eq(sector_t s1, sector_t s2) {
    for(uint i=0; i<SECTOR_NBYTES; i++) {
        if(s1[i] != s2[i]) return -1;
    }
    return 1;
}


void gen_rand_sector(sector_t sector) {
    for(uint i=0; i<SECTOR_NBYTES; i++) {
        sector[i] = (char) (rand() % 256);
    }
}

#endif