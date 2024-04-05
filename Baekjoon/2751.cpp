#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n, k;
    vector <int> ar;
    
    cin >> n;

    for (int i{0}; i < n; i++) {
        cin >> k;

        ar.push_back(k);
    }

    sort(ar.begin(), ar.end());

    for (int i{0}; i < ar.size(); i++) {
        cout << ar[i] << endl;
    }
}