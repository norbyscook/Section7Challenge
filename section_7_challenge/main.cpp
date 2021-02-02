#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void print_1d_vector(vector <int> vect);
void print_2d_vector(vector <vector <int>> vect);

int main ()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(100);
    print_1d_vector(vector1);
    
    vector2.push_back(200);
    vector2.push_back(300);
    print_1d_vector(vector2);

    vector <vector <int>> vect_2d;
    vect_2d.push_back(vector1);
    vect_2d.push_back(vector2);
    print_2d_vector(vect_2d);
    
    vector1.at(0) = 999;
    print_2d_vector(vect_2d);
    print_1d_vector(vector1);
}

void print_1d_vector(vector <int> vect)
{
    for(auto i = vect.begin(); i != vect.end(); i++)
    {
        cout << *i << endl;
    }
}

void print_2d_vector(vector <vector <int>> vect)
{
    int v_size_i = vect.size();
 
    for (int i = 0; i < v_size_i; i++)
    {
        int v_size_j = vect.at(i).size();
        for (int j = 0; j < v_size_j; j++)
        {
            cout << vect.at(i).at(j) << ", ";
        }
        cout << endl;
    }
}