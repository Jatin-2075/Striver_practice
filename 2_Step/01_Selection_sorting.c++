#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "arr size\n";
    int arrsize;
    cin >> arrsize ;

    int arr[arrsize];

    for(int n = 0; n < arrsize; n++){
        cin >> arr[n];
    }

    for(int n = 0; n < arrsize; n++){
        int min = n;
        for(int j = n + 1; j < arrsize; j++){
            if(arr[min] > arr[j]) min = j;
        }
        swap(arr[n] , arr[min]);  
    }
    for(auto a : arr){
        cout << a << " ";
    }
}


// selection is like teacher picking up the student height wise by comparing one by one