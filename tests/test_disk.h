#ifndef TEST_DISK_H
#define TEST_DISK_H

#include <check.h>
#include <stdlib.h>
#include <stdio.h>

#include "test_utils.h"
#include "../include/disk.h"


START_TEST(test_read_disk_sector) {
    disk_t disk;
    for(uint i=0; i<SECTOR_NUM; i++) {
        sector_t sector;
        gen_rand_sector(sector);
        memcpy(disk + i, sector, sizeof(sector_t));
        sector_t sector_i;
        read_disk_sector(disk, i, sector_i);
        ck_assert(test_sector_eq(disk[i], sector_i) > 0);
    }
}
END_TEST


START_TEST(test_write_disk_sector) {
    disk_t write_disk, blank_disk;
    for(uint i=0; i<SECTOR_NUM; i++) {
        sector_t sector_i;
        gen_rand_sector(sector_i);
        memcpy(write_disk + i, sector_i, sizeof(sector_t));
    }

    for(uint i=0; i<SECTOR_NUM; i++) {
        write_disk_sector(blank_disk, i, write_disk[i]);
        ck_assert(test_sector_eq(blank_disk[i], write_disk[i]) > 0);
    }
}
END_TEST


Suite* disk_suite() {
    Suite *s;
    TCase *tc_core;
    
    s = suite_create("disk");
    tc_core = tcase_create("core");

    tcase_add_test(tc_core, test_read_disk_sector);
    tcase_add_test(tc_core, test_write_disk_sector);
    suite_add_tcase(s, tc_core);

    return s;
}

#endif