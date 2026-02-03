#include <iostream>
using namespace std;
#include <vector>

int main()
{
  vector<int> vec;
  cout << vec.size() << endl;

  vec.push_back(25);
  cout << vec.size() << endl;

  for(int x : vec){
    cout << x << "";
  }

  cout << endl;

   return 0;
}