#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>& v, int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n-1; i++) {
        if (v[i] > v[i+1]) {
            swap(v[i], v[i+1]);
        }
    }

    bubble(v, n-1);
}

int main() {
    vector<int> v = {11,2,3,44,9};

    bubble(v, v.size());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}