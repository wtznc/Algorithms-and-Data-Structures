//
//  CTripleDataStructure.cpp
//  Lecture2_PairDataStructure
//
//  Created by Wojciech Tyziniec on 16/10/2017.
//  Copyright © 2017 Wojciech Tyziniec. All rights reserved.
//

#include "CTripleDataStructure.hpp"
// Constructor
CTripleDataStructure::CTripleDataStructure(int first, int second, int third) {
    setFirst(first);
    setSecond(second);
    setThird(third);
}

// Setters
void CTripleDataStructure::setFirst(int first) {
    m_first = first;
}

void CTripleDataStructure::setSecond(int second) {
    m_second = second;
}

void CTripleDataStructure::setThird(int third) {
    m_third = third;
}
    

