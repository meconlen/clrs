#pragma once

#include <iterator>

#include "../config.h"

template<class T>
void insertion_sort(T begin, T end)
{
    if(begin == end) return;
    auto rend = std::make_reverse_iterator(begin) - 1;
    for(auto current = begin + 1; current < end; current++) {
        auto key = *current;
        auto j = std::make_reverse_iterator(current);
        // NB: we are working with reverse iterators so we can go one past the beginning
        //     but this means our index arithmetic is inverted; swaping '-' and '+' operators
        while(j <=rend && *j > key) {
            *(j-1) = *j;
            ++j;
        }
        *(j-1) = key;
    }
}