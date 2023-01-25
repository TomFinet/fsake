## Basic representations/mappings:

Files       --> inodes
Directories --> list of (file_name, inode)

## Inode:

- file type
- access rights
- owners
- timestamps
- size
- pointers to data blocks
- can have indirect and double-indirect blocks to accomodate larger files.

## I/O request on file:

kernel converts the specified file offset to a block number, uses the block number as an index into the block addresses table, then does I/O on that block.

## Directories:

A special type of file.

## Mounting:

Starts by reading the superblock from disk,
storing it in some kernel table.