//
//  CTripleDataStructure.hpp
//  Lecture2_PairDataStructure
//
//  Created by Wojciech Tyziniec on 16/10/2017.
//  Copyright © 2017 Wojciech Tyziniec. All rights reserved.
//

#ifndef CTripleDataStructure_hpp
#define CTripleDataStructure_hpp

#include <stdio.h>
class CTripleDataStructure {
private:
    int m_first;
    int m_second;
    int m_third;
    
public:
    CTripleDataStructure(int first, int second, int third);
    void setFirst(int first);
    void setSecond(int second);
    void setThird(int third);
    
    int getFirst() {
        return m_first;
    }
    
    int getSecond() {
        return m_second;
    }
    
    int getThird() {
        return m_third;
    }
    
};
#endif /* CTripleDataStructure_hpp */
