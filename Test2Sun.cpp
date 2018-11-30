// Std C++ Includes
#include <iostream>
#include <sstream>

using std::string;
using std::exception;
using std::stringstream;
using std::endl;
using std::cout;
using std::cerr;


int main(int argc, char* argv[])
{
    try
    {
        int sum =0;
        for (int ii = 0; ii < 100; ii++)
        {
            sum = sum + ii;
        }
        std::cout<<sum<<endl;
        
    }
    
    catch (...)
    {
        cerr << "Unknown Exception: " << endl;
    }
}


