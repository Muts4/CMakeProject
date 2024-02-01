// myheader.h
#include <iostream>

#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
public:
    // Constructor
    MyClass();

    // Member function
    void printMessage();
    
private:
    // Member variable
    int myNumber;
};

#endif  // MYCLASS_H