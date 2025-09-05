#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "enter\n";
    int size;
    cin >> size;

    int arr[size];

    for(int n = 0; n < size; n++){
        cin >> arr[n];
    }

    for(int n = 0; n < size; n++){
        int key = arr[n];
        int j = n -1 ;

        while(j >= 0 && arr[j] > key ){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    for(auto it : arr){
        cout << it << " , ";
    }
}

//doubt