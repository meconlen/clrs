#pragma once

#include <iterator>

#include "../config.h"

template<class T>
void insertion_sort(T begin, T end)
{
    if(begin == end) return;
    T current = begin;
    ++current;
    while(current < end) {
        auto key = *current;
        auto j = current;
        while(j > begin && *(j-1) > key) {
            *j = *(j+1);
            --j;
        }
        *j = key;
        current++;
    }
}