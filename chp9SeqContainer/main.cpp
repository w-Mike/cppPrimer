// C++ primer: page
/*

*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include "func.h"

int main()
{
    ifstream ifs("../../data/test.txt");

    vectorTest(ifs);
    return 1;
}
