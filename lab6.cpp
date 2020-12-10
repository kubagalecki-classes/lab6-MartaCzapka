#include "make_random_vector.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void print(vector< int > wek)
{
    for (int i = 0; i < 10; i++) {
        cout << wek[i] << " ";
    }
    cout << "\n";
}
int main()
{
    // vector< int > wek;
    // wek = make_random_vector(10, 0, 10);
    // print(wek);
    // sort(wek.begin(), wek.end(), [](int a, int b) { return a > b; });
    // print(wek);
    // int j;
    // cin >> j;
    // cout << count_if(wek.begin(), wek.end(), [&](int i) { return i > j; });
    string ciag;
    cin >> ciag;
    cout << ciag;
    auto il = adjacent_find(ciag.begin(), ciag.end());
    if (il == ciag.end())
        return 0;
    else
        return 1;
}
