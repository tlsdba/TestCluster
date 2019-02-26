#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    string str = argv[1];
    str += ".txt";
    ofstream out_put(str.c_str());
    out_put << "test " << argv[1] << endl;
    out_put.close();
    return 0;
}

