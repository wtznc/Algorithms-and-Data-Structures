//
//  main.cpp
//  Lecture2_PairDataStructure
//
//  Created by Wojciech Tyziniec on 16/10/2017.
//  Copyright © 2017 Wojciech Tyziniec. All rights reserved.
//

#include <iostream>
#include "CTripleDataStructure.hpp"
using namespace std;
int main() {
    CTripleDataStructure triple(0, 1, 2);
    cout<<"First = "<<triple.getFirst()<<endl;
    cout<<"Second = "<<triple.getSecond()<<endl;
    cout<<"Third = "<<triple.getThird()<<endl;
    
    return 0;
}
