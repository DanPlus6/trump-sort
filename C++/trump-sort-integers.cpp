#include <bits/stdc++.h>
using namespace std;

vector<int> trumpSort(vector<int> arr) {
    int N = arr.size();
    int wall = arr[0];
    vector<int> citizens = {arr[0]};

    for (int i = 1; i < N; i++) {
        if (arr[i] >= wall) {
            wall = arr[i];
            citizens.push_back(arr[i]);
        }
    }
    
    return citizens;
}

int main() {
    vector<int> arr = {24,48,30,12,65,77,24,2,13,80,76,4,1};

    vector<int> sorted = trumpSort(arr);

    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << "\n";
    }

    return 0;
}
