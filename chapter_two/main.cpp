#include <iostream>
#include "io.h"


int main()
{
    int x {readNumber()};
    int y {readNumber()};
    writeNumber(x+y); 
}