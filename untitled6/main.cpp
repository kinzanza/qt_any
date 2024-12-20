#include <iostream>
#include<fstream>
#include<vector>
#include <sstream>

using namespace std;

int main()
{
    std::fstream file("path");
    std::vector<std::string> qiz;
    std::string line;
    std::stringstream ss(line);

    ss>>qiz;
}
