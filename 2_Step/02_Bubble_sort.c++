#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "arrsize\n";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    for(auto a : arr){
        cout << a << " , ";
    }
}