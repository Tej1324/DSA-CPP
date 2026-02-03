#include <iostream>
using namespace std;

int main();
{
    int temp;

    cout << "whats the temp today";
    cin >> temp;
    cout << "temp is :" << temp;
    
    for(int i = 1;i<=50;i++)
    {
      if(temp <= i){
        cout << "A";
      }
      else{
        cout << "B";
      }
    }
    



  return 0;
}