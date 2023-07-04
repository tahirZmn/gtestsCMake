#include <gtest/gtest.h>
#include "classic.h"
#include "strings.h"


TEST (ClassicTests , facts){
    
  ASSERT_EQ(120, fact(5));
}

TEST(ClassicTests , bol){
  ASSERT_TRUE(compare(5,5));
}
TEST(ClassicTests , strcmpr){
  //std::string str1 {"tahir"};
  //std::string str2 {"tahir"};
  EXPECT_TRUE(strcmpr("tahir","tahir"));
  EXPECT_FALSE(strcmpr("tahir","tahir"));
}


int main(int argc, char **argv){
::testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}