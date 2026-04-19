#include <iostream>
using namespace std;
#include <vector>

int factorialN(int n){
    int fact = 1;

    for(int i=1;i<=n;i++)
        fact *= i;
    }
    return fact;
}
int main(){
    cout << factorialN(5) << endl;
    return 0;
}
