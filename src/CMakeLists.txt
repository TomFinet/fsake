set(LIB_SOURCES disk.c inode.c)
set(MAIN_SOURCES ${LIB_SOURCES} main.c)

include_directories(../include)
add_library(libfsake STATIC ${LIB_SOURCES} ${INCLUDE_DIRECTORIES})

add_executable(fsake ${MAIN_SOURCES})