#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void print_1d_vector(vector <int> vect);

int main ()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(100);
    print_1d_vector(vector1);
    
    vector2.push_back(200);
    vector2.push_back(300);

}

void print_1d_vector(vector <int> vect)
{
    for(auto i = vect.begin(); i != vect.end(); i++)
    {
        cout << *i << endl;
    }
}