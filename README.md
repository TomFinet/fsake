A simple file system using an array as a dummy disk. Is not thread safe.

## File system stats:

Total physical storage capacity: 1MiB
Block size:                      4KiB
Number of blocks:                256
Max file size:                   32 KiB
Min file size:                   1 block

inode size:                      256B
inode per block:                 16
inode block number:              16
Total inode number:              256                
Inode indirection level:         none

```
|--------|--------|--------|--------|--------|--------|-----------------
| Super  | inode  | data   | i0-i15 |  ....  | i240-  |    Data
| Block  | bitmap | bitmap |        |        |  i255  |       Blocks
|--------|--------|--------|--------|--------|--------|-----------------
0        4        8       12        16  ...  72       76 KiB
```