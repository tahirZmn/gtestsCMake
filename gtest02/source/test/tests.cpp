#include <gtest/gtest.h>
#include "classic.h"

TEST (ClassicTests , facts){
    
  ASSERT_EQ(120, fact(5));
}

TEST(ClassicTests , bol){
  ASSERT_TRUE(compare(5,5));
}


int main(int argc, char **argv){
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}