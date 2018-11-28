#include <gtest/gtest.h>
#include "anagram.h"


TEST(anagram_check, test_anagram){
    EXPECT_EQ(anagram("god", "dog"), true);
}