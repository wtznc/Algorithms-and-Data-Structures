//
//  main.cpp
//  Fibonacci
//
//  Created by Wojciech Tyziniec on 05/02/2018.
//  Copyright © 2018 wtznc. All rights reserved.
//

#include <iostream>
#include <vector>

int dynamicFibonacci(int n){
    std::vector<int> values;
    values.reserve(n);
    values[0] = values[1] = 1;
    for(int i = 2; i < n; i++){
        values[i] = values[i-1] + values[i-2];
    }
    return values[n-1];
}

int recursiveFibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    } else {
        return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);
    }
}

int main(int argc, const char * argv[]) {
    int fibNum = 12;
    std::cout<<"(recursive) Value for "<<fibNum<<"th Fibonacci number = "<<recursiveFibonacci(fibNum)<<std::endl;
    std::cout<<"(dynamic) Value for "<<fibNum<<"th Fibonacci number = "<<dynamicFibonacci(fibNum)<<std::endl;
    return 0;
}
