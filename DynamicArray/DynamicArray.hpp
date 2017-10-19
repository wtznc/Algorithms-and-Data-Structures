#ifndef DYNAMICARRAY_HPP
#define DYNAMICARRAY_HPP

#include <cstddef>

#include "OpCounter.hpp"

class DynamicArray {
public:
    DynamicArray(size_t);
    size_t length();
    int select(size_t);
    void store(int, size_t);
    void push(int);
    int pop();
    
private:
    int *array;
    size_t currentLength;
    size_t maxSize;
    void extend();
    
};
#endif /* DynamicArray_hpp */
