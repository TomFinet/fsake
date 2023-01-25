#include "file.h"

ssize_t open(char* pathname) {
    if(pathname == NULL || *pathname != '/') return -1;
    
    // read root inode from disk
    // probably want to cache in memory
    struct inode* root_inode = (struct inode *) malloc(sizeof(struct inode));
    if(!read_inode(ROOT_INODE), root_inode) return -1;

    // goto root data block using inode

    // 

    uint done = 0;
    while(!done) {



        while(pathname != NULL && *pathname != '/') {
            
        }
    }
}