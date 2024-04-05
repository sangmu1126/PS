#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    vector <int> ar;
    vector <int> sum;
    cin >> n >> m;

    for (int i{0}; i < n; i++) {
        cin >> k;

        ar.push_back(k);
    }

    for (int i{0}; i < ar.size(); i++) {
        for (int j{1}; j < ar.size(); j++) {
            sum.push_back(ar[i]+ar[j]);
        }
    }

    sort(sum.begin(), sum.end());

    
}