#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector <vector <int>> movie_ratings
    {
        {1, 2, 3},
        {5, 3, 4}
    };
    
    vector <int> movie_rating = {4, 3, 1};
    movie_ratings.push_back(movie_rating);
    
//    print the ratings    
    for (auto i = movie_rating.begin(); i != movie_rating.end(); i++)
    {
        cout << *i << endl;
        
    }
    
}