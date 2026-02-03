#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n], pref[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build prefix sum array
    pref[0] = arr[0];
    for(int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + arr[i];
    }

    // Print prefix sum array
    cout << "Prefix sum array: ";
    for(int i = 0; i < n; i++) {
        cout << pref[i] << " ";
    }
    cout << endl;

    int l, r;
    cout << "Enter range (l r): ";
    cin >> l >> r;

    int sum;
    if(l == 0)
        sum = pref[r];
    else
        sum = pref[r] - pref[l - 1];

    cout << "Range sum: " << sum;

    return 0;
}
