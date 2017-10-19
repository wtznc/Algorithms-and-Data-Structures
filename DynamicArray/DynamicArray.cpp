//
//  DynamicArray.cpp
//  DynamicArray
//
//  Created by Wojciech Tyziniec on 19/10/2017.
//  Copyright © 2017 Wojciech Tyziniec. All rights reserved.
//

#include "DynamicArray.hpp"
DynamicArray::DynamicArray(size_t size){
    maxSize = size;
    array = new int[maxSize];
    currentLength = 0;
}

size_t DynamicArray::length(){
    return currentLength;
}

int DynamicArray::select(size_t k){
    
    return array[k];
}

void DynamicArray::store(int o, size_t k){
    array[k] = o;
}

void DynamicArray::push(int o){
    if(currentLength == maxSize) {
        extend();
    } 
        array[currentLength] = o;
        currentLength++;
    
}

int DynamicArray::pop(){
	currentLength--;
    int retValue = array[currentLength];
    int *newArray = new int[maxSize];
    for(size_t i = 0; i < currentLength; i++) {
        newArray[i] = array[i];
    }
    delete [] array;
    array = newArray;
    return retValue;
    
}

void DynamicArray::extend(){
    maxSize = 2 * maxSize;
    int *newArray = new int[maxSize];
    for(size_t i = 0; i < currentLength; i++){
        newArray[i] = array[i];
    }
    delete [] array;
    array = newArray;
}
