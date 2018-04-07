#include "test.h"

#ifdef WITH_TEST
#define INIT_GTEST(argc, argv) \
::testing::InitGoogleTest(&argc, argv);\
return RUN_ALL_TESTS();
#else
#define INIT_GTEST(argc, argv)
#endif

int main(int argc, char **argv) {
    INIT_GTEST(argc, argv);
}