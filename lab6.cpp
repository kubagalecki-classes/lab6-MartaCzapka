#include "make_random_vector.hpp"
#include <algorithm>
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
     vector< int > wek;
     wek = make_random_vector(10, 0, 10);
     print(wek);
     find
     sort(wek.begin(), wek.end(), [](int a, int b) { return a > b; });
     print(wek);
     int j;
     cin >> j;
     cout << count_if(wek.begin(), wek.end(), [&](int i) { return i > j; });
    //string ciag;
   // cin >> ciag;
   // cout << ciag;
   // string s   = "piesek";
  //  string k   = "kotek";
  //  auto   il  = search(ciag.begin(), ciag.end(), s.begin(), s.end());
   // auto   il2 = search(ciag.begin(), ciag.end(), k.begin(), k.end());
   // if (il == ciag.end() && il2 == ciag.end())
    //    return 0;
  //  else
  //      return 1;
}
