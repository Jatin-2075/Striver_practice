#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr , int left, int mid , int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for(int n = 0; n < n1; ++n) L[n] = arr[left + n];
    for(int n = 0; n < n2; ++n) R[n] = arr[mid + 1 + n];

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];
}

void mergesort(vector<int> &arr, int left , int right) {
    if(left >= right) return;

    int mid = left + (right - left) / 2;

    mergesort(arr, left, mid);
    mergesort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    vector<int> arr = {1, 2, 9, 5, 4, 6, 3};

    cout << "Unsorted: ";
    for(auto f : arr) cout << f << " ";
    cout << "\n";

    mergesort(arr, 0, arr.size() - 1);

    cout << "Sorted: ";
    for(auto s : arr) cout << s << " ";
    cout << "\n";
}
