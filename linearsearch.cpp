#include <iostream>
using namespace std;
#include <vector>
#include <climits>
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

void printnnumbers(int n){
    
    for(int i = 0;i<n;i++){
        cout << i << endl;
    }

    return;

    // int n;
    
    // cin >> n;
    
    // printnnumbers(n);

    // return 0;
}


void selectionsort(int arr[],int n){

    for(int i = 0;i<=n-2;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }


    // int n;
    // cin >> n;

    // int arr[n];
    // for(int i = 0;i<n;i++) cin >> arr[i];
    // sort(arr,n);
    // for(int i = 0;i<n;i++){
    // cout << arr[i] << " ";
    // }
    // return 0;
    
}


void bubble_sort(int arr[],int n){
    int temp = 0;
    for(i = 0;i < n;i++){
        for(j = i;j < n;j++){
            if(arr[i] < arr)
        }
    }
}


int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }

    bubble_sort(arr,n);

    for(i = 0;i<n;i++){
        cout << arr[i] << endl;
    }


}
