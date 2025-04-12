#include <algorithm>
#include <array>
#include <iostream>

#include "../config.h"

#ifdef HAVE_GTEST_GTEST_H
#include <gtest/gtest.h>
#endif

#include "insertion-sort.hpp"

#ifdef HAVE_GTEST_GTEST_H
TEST(insertion_sort, integers)
{
    std::array<int, 6> a{5, 2, 4, 6, 1, 3};
    insertion_sort(a.begin(), a.end());
    EXPECT_EQ(std::is_sorted(a.begin(), a.end()), true);
    if(std::is_sorted(a.begin(), a.end()) == false) {
        for(const auto& x: a) {
            std::cout << x << std::endl;
        }
    }
}

TEST(insertion_sort, empty)
{
    std::array<int, 0> a;
    insertion_sort(a.begin(), a.end());
    EXPECT_EQ(std::is_sorted(a.begin(), a.end()), true);
    if(std::is_sorted(a.begin(), a.end()) == false) {
        for(const auto& x: a) {
            std::cout << x << std::endl;
        }
    }
}

TEST(insertion_sort, end)
{
    std::array<int, 0> a;
    insertion_sort(a.end(), a.end());
    EXPECT_EQ(std::is_sorted(a.begin(), a.end()), true);
    if(std::is_sorted(a.begin(), a.end()) == false) {
        for(const auto& x: a) {
            std::cout << x << std::endl;
        }
    }
}

#endif

int main(int argc, char **argv) {
#ifdef HAVE_GTEST_GTEST_H
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
#else
    return 1;
#endif
}