#pragma once

#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

#include "../config.h"

namespace {
    template<class T>
    std::string to_string(T begin, T end)
    {
        std::stringstream ss;
        for(auto current = begin; current < end; current++) {
            ss << *current;
            if(current + 1 != end) {
                ss << ", ";
            } 
        }    
        return ss.str();
    }
    
    }

// NB: we are working with reverse iterators so we can go one past the beginning
//     but this means our index arithmetic is inverted; swaping '-' and '+' operators

//----begin:insertion_sort----
template<class T>
void insertion_sort(T begin, T end)
{
    if(begin >= end) return;
    auto rend = std::make_reverse_iterator(begin) - 1;
    for(auto current = begin + 1; current < end; current++) {
        auto key = *current;
        auto j = std::make_reverse_iterator(current); 
        for( ; j <= rend && *j > key; ++j) {
            *(j-1) = *j;
        }
        *(j-1) = key;
    }
}
//----end:insertion_sort----
