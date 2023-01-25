#include "test_disk.h"
#include "test_inode.h"

int main(void) {

    Suite *s;
    SRunner *sr;

    s = inode_suite();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);

    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    s = disk_suite();
    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);

    number_failed += srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
 }

 Suite *s;
    
