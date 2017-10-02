//
//  main.cpp
//  
//
//  Created by Валерия Колпакова on 28.09.17.
//  Copyright © 2017 Валерия Колпакова. All rights reserved.
//

#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    
    stack<int> intStack;
    
    intStack.push(0);
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.push(4);
    intStack.push(5);
    intStack.push(6);
    intStack.push(7);
    intStack.push(8);
    intStack.push(9);
    
    cout << "STACK\n";
    intStack.print();
    
    for (int i = 0; i < 10; i++) 
    {
        cout << intStack.pop() << endl;
    }
    
    //cout << "Номер элемента стека: " << intStack.count() << endl;
    
    return 0;
}
