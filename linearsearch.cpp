#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


int linearsearch(int arr[],int sz,int target){
    for(int i = 0;i < sz;i++){
        if(arr[i] == target){
            return arr[i];
        }
    }

    return -1;
}

void reversearray(int arr[],int sz){
    int start = 0;
    int end = sz - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[] = {4,1,4,56,4,32,5,7,54,234,565,34};
    int sz = 12;
    // int target = 32;
    reversearray(arr,sz);

    for(int i=0;i<sz;i++){
        cout << arr[i] << " "<< endl;
    }
    // cout << linearsearch(arr, sz, target) << endl;
    return 0;
}
