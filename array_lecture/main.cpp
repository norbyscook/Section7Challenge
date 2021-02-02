#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector <int> numbers (5);
    numbers.push_back(80);
    cout << numbers.at(5) << endl;
}
