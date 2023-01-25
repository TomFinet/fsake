#ifndef TEST_INODE_H
#define TEST_INODE_H

#include <check.h>
#include <stdlib.h>
#include <stdio.h>

#include "../include/inode.h"
#include "../include/disk.h"


START_TEST(test_get_inode) {
    struct inode* inode = (struct inode *) malloc(sizeof(struct inode));
    get_inode(1, inode);
    ck_assert(inode->mode == (uint16_t)((char) 0));
    ck_assert(inode->uid == (uint16_t)((char) 0));
    ck_assert(inode->size == (uint32_t)((char) 0));
    ck_assert(inode->time == (uint32_t)((char) 0));
    ck_assert(inode->ctime == (uint32_t)((char) 0));
    ck_assert(inode->mtime == (uint32_t)((char) 0));
    ck_assert(inode->dtime == (uint32_t)((char) 0));
    ck_assert(inode->gid == (uint16_t)((char) 0));
    ck_assert(inode->links_cnt == (uint16_t)((char) 0));
    ck_assert(inode->blocks == (uint32_t)((char) 0));
    for(uint i=0; i<INODE_DIRECT_BLOCK_PTRS; i++) {
        ck_assert(inode->block[i] == (uint32_t)((char) 0));
    }
}
END_TEST


Suite* inode_suite() {
    Suite *s;
    TCase *tc_core;
    
    s = suite_create("inode");
    tc_core = tcase_create("core");

    tcase_add_test(tc_core, test_get_inode);
    suite_add_tcase(s, tc_core);

    return s;
}

#endif